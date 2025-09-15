#pragma once
#include "Game.h"
#include <string>
#include <vector>
#include <atomic>
class TypingGame :
    public Game
{
public:
    std::string getName() const override {
        return "Typing Game";
    }
    void startGame() override;

    // TODO define variable
private:
    std::atomic<bool> _timeUp = false;
    int _difficulty_level;
    std::vector<std::string> _current_word_list;
    static const std::vector<std::string> EASY_WORD_LIST;
    static const std::vector<std::string> NORMAL_WORD_LIST;
    static const std::vector<std::string> HARD_WORD_LIST;
    static const int LIMIT_TIME = 60;
    void timer();
    std::string inputStr;
    std::string answerStr;
    int collectScore;
    int totalCount;
};