/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 03
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int level): Character(name, level), Warrior(name, level), Priest(name, level)
{
    _strengh = 9;
    _stamina = 10;
    _intelligence = 10;
    _spirit = 10;
    _agility = 2;
    std::cout << "the light falls on " << _name << std::endl;
}

Paladin::~Paladin()
{
}

int Paladin::Intercept()
{
    return Warrior::RangeAttack();
}