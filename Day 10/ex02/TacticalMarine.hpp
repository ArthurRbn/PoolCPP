/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 02
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_TACTICALMARINE_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
public:
    TacticalMarine();
    ~TacticalMarine();
    ISpaceMarine *clone() const override;
    void battleCry() const override;
    void rangedAttack() const override;
    void meleeAttack() const override;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_TACTICALMARINE_HPP
