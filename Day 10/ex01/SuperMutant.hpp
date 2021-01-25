/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 01
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_SUPERMUTANT_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_SUPERMUTANT_HPP

#include "AEnemy.hpp"

class SuperMutant: public AEnemy {
public:
    SuperMutant();
    ~SuperMutant();
    void takeDamage(int damage) override;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_SUPERMUTANT_HPP
