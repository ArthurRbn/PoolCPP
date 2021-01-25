/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 03
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_PALADIN_HPP
#define B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_PALADIN_HPP

#include "Warrior.hpp"
#include "Priest.hpp"

class Paladin: public virtual Character, public Warrior, public Priest {
public:
    Paladin(const std::string &name, int level);
    ~Paladin();
    using Warrior::CloseAttack;
    using Warrior::RestorePower;
    using Priest::Heal;
    using Priest::RangeAttack;
    int Intercept();
};

#endif //B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_PALADIN_HPP
