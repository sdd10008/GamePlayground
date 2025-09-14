#pragma once
#include "Game.h"
#include <string>
#include <vector>
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
    int _difficulty_level;
    std::vector<std::string> _current_word_list;
    const std::vector<std::string> EASY_WORD_LIST = {"cat","dog","sun","run","hat","red","big","map","box","jump","fish","ball","book","tree","cake","bird","milk","blue","good","door"};
    const std::vector<std::string> NORMAL_WORD_LIST = {"window","orange","flower","school","family","pretty","banana","yellow","travel","planet","garden","dinner","camera","turtle","market","summer","doctor","pocket","button","animal"};
    const std::vector<std::string> HARD_WORD_LIST = {"schedule","psychology","astronaut","thermometer","electricity","dictionary","university","architecture","opportunity","complicated","refrigerator","environment","mathematics","transportation","championship","questionnaire","communication","advertisement","responsibility","entrepreneurship"};
};