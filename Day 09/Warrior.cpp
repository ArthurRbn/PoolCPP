/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 2
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level) : Character(name, level),
                                                        _weaponName(std::string("hammer"))
{
    _strengh = 12;
    _stamina = 12;
    _intelligence = 6;
    _spirit = 5;
    _agility = 7;
    std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int Warrior::CloseAttack()
{
    int damage = 0;

    if (_power < 30) {
        std::cout << _name << " out of power" << std::endl;
    } else if (_power >= 30 && Range == CLOSE) {
        _power -= 30;
        damage = 20 + _strengh;
        std::cout << _name << " strikes with his " << _weaponName << std::endl;
    }
    return damage;
}

int Warrior::RangeAttack()
{
    int damage = 0;

    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
    } else if (_power >= 10 && Range == RANGE) {
        _power -= 10;
        Range = CLOSE;
        std::cout << _name << " intercepts" << std::endl;
    }
    return damage;
}