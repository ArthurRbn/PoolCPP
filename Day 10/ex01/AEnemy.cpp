/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 01
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type)
{
    _hp = hp;
    _type = type;
}

AEnemy::~AEnemy()
{
}

int AEnemy::getHP() const
{
    return _hp;
}

const std::string AEnemy::getType() const
{
    return _type;
}

void AEnemy::takeDamage(int damage)
{
    if (damage < 0)
        return;
    _hp -= damage;
}