/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 01
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_POWERFIST_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon {
public:
    PowerFist();
    ~PowerFist();
    void attack() const;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_POWERFIST_HPP
