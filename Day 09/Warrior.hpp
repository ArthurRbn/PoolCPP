/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 2
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_WARRIOR_HPP
#define B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_WARRIOR_HPP

#include <iostream>
#include "Character.hpp"

class Warrior: public virtual Character {
public:
    Warrior(const std::string &name, int level);
    ~Warrior();
    int CloseAttack();
    int RangeAttack();
protected:
    const std::string _weaponName;
};

#endif //B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_WARRIOR_HPP
