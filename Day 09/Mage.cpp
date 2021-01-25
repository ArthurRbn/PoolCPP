/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 03
*/

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    _strengh = 6;
    _stamina = 6;
    _intelligence = 12;
    _spirit = 11;
    _agility = 7;
    std::cout << _name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int Mage::CloseAttack()
{
    int damage = 0;

    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
    } else if (_power >= 10 && Range == CLOSE) {
        _power -= 10;
        Range = RANGE;
        std::cout << _name << " blinks" << std::endl;
    }
    return damage;
}

int Mage::RangeAttack()
{
    int damage = 0;

    if (_power < 25) {
        std::cout << _name << " out of power" << std::endl;
    } else if (_power >= 25) {
        _power -= 25;
        damage = 20 + _spirit;
        std::cout << _name << " launches a fire ball" << std::endl;
    }
    return damage;
}

void Mage::RestorePower()
{
    _power += 50 + _intelligence;
    if (_power > 100)
        _power = 100;
    std::cout << _name << " takes a mana potion" << std::endl;
}