/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 03
*/

#include "Priest.hpp"

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
    _strengh = 4;
    _stamina = 4;
    _intelligence = 42;
    _spirit = 21;
    _agility = 2;
    std::cout << _name << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

int Priest::CloseAttack()
{
    int damage = 0;

    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
    } else if (_power >= 10 && Range == CLOSE) {
        _power -= 10;
        damage = 10 + _spirit;
        Range = RANGE;
        std::cout << _name << " uses a spirit explosion" << std::endl;
    }
    return damage;
}

void Priest::Heal()
{
    if (_power < 10) {
        std::cout << _name << " out of power" << std::endl;
    } else {
        _power -= 10;
        _pv += 70;
        if (_pv > 100)
            _pv = 100;
        std::cout << _name << " casts a little heal spell" << std::endl;
    }
}