/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-arthur.robine
** File description:
** Exercice 0
*/

#ifndef B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_SKAT_HPP
#define B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_SKAT_HPP

#include <iostream>

class Skat {
public:
    Skat(const std::string &name = "bob", int stimPaks = 15);
    ~Skat();
    int &stimPaks();
    const std::string &name();
    void shareStimPaks(int number, int &stock);
    void addStimPaks(unsigned int number);
    void useStimPaks();
    void status();
private:
    int _stock;
    std::string _name;
};

#endif //B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_SKAT_HPP
