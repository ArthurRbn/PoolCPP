/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 03
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_PRIEST_HPP
#define B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_PRIEST_HPP

#include "Mage.hpp"

class Priest: public virtual Character, public Mage {
public:
    Priest(const std::string &name, int level);
    ~Priest();
    int CloseAttack();
    void Heal();
};

#endif //B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_PRIEST_HPP
