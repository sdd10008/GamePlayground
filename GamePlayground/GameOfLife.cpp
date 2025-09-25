#include "GameOfLife.h"
#include <iostream>

GameOfLife::GameOfLife(int rows, int cols) : rows(rows), cols(cols), generation(0) {
    grid.resize(rows, std::vector<int>(cols, 0));
}

void GameOfLife::initializeGrid(Pattern pattern) {
    // 全て0で初期化
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            grid[i][j] = 0;
        }
    }

    // パターンをセット
    switch (pattern) {
    case GLIDER: {
        grid[1][2] = 1;
        grid[2][3] = 1;
        grid[3][1] = 1;
        grid[3][2] = 1;
        grid[3][3] = 1;
        break;
    }
    case BLOCKER: {
        grid[9][9] = 1;
        grid[9][10] = 1;
        grid[10][9] = 1;
        grid[10][10] = 1;
        break;
    }
    case PULSAR: {
        // パルサー
        int c = 10;
        grid[c][c - 6] = 1; grid[c][c - 5] = 1; grid[c][c - 4] = 1;
        grid[c][c + 6] = 1; grid[c][c + 5] = 1; grid[c][c + 4] = 1;
        grid[c - 1][c - 6] = 1; grid[c - 1][c - 5] = 1; grid[c - 1][c - 4] = 1;
        grid[c - 1][c + 6] = 1; grid[c - 1][c + 5] = 1; grid[c - 1][c + 4] = 1;
        grid[c - 2][c - 6] = 1; grid[c - 2][c - 5] = 1; grid[c - 2][c - 4] = 1;
        grid[c - 2][c + 6] = 1; grid[c - 2][c + 5] = 1; grid[c - 2][c + 4] = 1;
        break;
    }
    case EMPTY:
    default:
        break;
    }
}

void GameOfLife::updateGrid() {
    std::vector<std::vector<int>> newGrid = grid;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int liveNeighbors = countLiveNeighbors(i, j);

            if (grid[i][j] == 1) { // 生きているセル
                if (liveNeighbors < 2 || liveNeighbors > 3) {
                    newGrid[i][j] = 0; // 死亡
                }
            }
            else { // 死んでいるセル
                if (liveNeighbors == 3) {
                    newGrid[i][j] = 1; // 誕生
                }
            }
        }
    }
    grid = newGrid;
    generation++;
}

void GameOfLife::printGrid() const {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << (grid[i][j] == 1 ? "■ " : "□ ");
        }
        std::cout << std::endl;
    }
}

int GameOfLife::getGeneration() const {
    return generation;
}

int GameOfLife::countLiveNeighbors(int x, int y) const {
    int liveNeighbors = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue;

            int neighborX = x + i;
            int neighborY = y + j;

            if (neighborX >= 0 && neighborX < rows && neighborY >= 0 && neighborY < cols) {
                liveNeighbors += grid[neighborX][neighborY];
            }
        }
    }
    return liveNeighbors;
}