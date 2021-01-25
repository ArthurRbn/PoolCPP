/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 03
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_MAGE_HPP
#define B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_MAGE_HPP

#include "Character.hpp"

class Mage: public virtual Character {
public:
    Mage(const std::string &name, int level);
    ~Mage();
    int CloseAttack();
    int RangeAttack();
    void RestorePower();
};

#endif //B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_MAGE_HPP
