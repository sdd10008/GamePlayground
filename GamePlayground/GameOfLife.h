#ifndef GAMEOFLIFE_H
#define GAMEOFLIFE_H

#include <vector>

// ライフゲームの初期パターン
enum Pattern {
    GLIDER,
    BLOCKER,
    PULSAR,
    EMPTY
};

class GameOfLife {
public:
    // コンストラクタ
    GameOfLife(int rows, int cols);

    // グリッドを初期化
    void initializeGrid(Pattern pattern);

    // グリッドを更新（1世代進める）
    void updateGrid();

    // グリッドを表示
    void printGrid() const;

    // 現在の世代数を取得
    int getGeneration() const;

private:
    int rows;
    int cols;
    std::vector<std::vector<int>> grid;
    int generation;

    // 指定したセルの周囲の生きているセルの数を数える
    int countLiveNeighbors(int x, int y) const;
};

#endif // GAMEOFLIFE_H