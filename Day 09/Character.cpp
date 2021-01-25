/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 1
*/

#include <iostream>
#include "Character.hpp"

Character::Character(const std::string &name, int level)
{
    _name = name;
    _level = level;
    _pv = 100;
    _power = 100;
    _strengh = 5;
    _stamina = 5;
    _intelligence = 5;
    _spirit = 5;
    _agility = 5;
    Range = CLOSE;
    std::cout << _name << " Created" << std::endl;
}

Character::~Character()
{
}

const std::string &Character::getName() const
{
    return _name;
}

int Character::getLvl() const
{
    return _level;
}

int Character::getPv() const
{
    return _pv;
}

int Character::getStrengh() const
{
    return _strengh;
}

int Character::getPower() const
{
    return _power;
}

int Character::getStamina() const
{
    return _stamina;
}

int Character::getIntelligence() const
{
    return _intelligence;
}

int Character::getSpirit() const
{
    return _spirit;
}

int Character::getAgility() const
{
    return _agility;
}

int Character::CloseAttack()
{
    int damage = 0;

    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
    } else if (_power >= 10 && Range == CLOSE) {
        _power -= 10;
        damage = 10 + _strengh;
        std::cout << _name << " strikes with a wooden stick" << std::endl;
    }
    return damage;
}

int Character::RangeAttack()
{
    int damage = 0;

    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
    } else {
        _power -= 10;
        damage = 5 + _strengh;
        std::cout << _name << " tosses a stone" << std::endl;
    }
    return damage;
}

void Character::Heal()
{
    _pv += 50;
    if (_pv > 100)
        _pv = 100;
    std::cout << _name << " takes a potion" << std::endl;
}

void Character::RestorePower()
{
    _power += 100;
    if (_power > 100)
        _power = 100;
    std::cout << _name << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    _pv -= damage;
    if (_pv > 0)
        std::cout << _name << " takes " << damage << " damage" << std::endl;
    else if (_pv <= 0)
        std::cout << _name << " out of combat" << std::endl;
}