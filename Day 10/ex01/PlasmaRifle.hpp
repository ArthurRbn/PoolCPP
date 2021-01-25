/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 01
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_PLASMARIFLE_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
public:
    PlasmaRifle();
    ~PlasmaRifle();
    void attack() const;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_PLASMARIFLE_HPP
