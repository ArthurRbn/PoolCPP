/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 02
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_SQUAD_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_SQUAD_HPP

#include <iostream>
#include <vector>
#include "ISquad.hpp"
#include "TacticalMarine.hpp"

class Squad: public ISquad {
public:
    Squad();
    Squad(Squad const &copy);
    ~Squad();
    int getCount() const override;
    ISpaceMarine* getUnit(int) override;
    int push(ISpaceMarine*) override;
    void operator=(Squad const &copy);
private:
    std::vector<ISpaceMarine *> _marines;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_SQUAD_HPP
