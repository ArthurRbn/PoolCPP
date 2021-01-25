/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 01
*/

#include "Character.hpp"

Character::Character(const std::string &name)
{
    _name = name;
    _ap = 40;
    _weapon = nullptr;
}

Character::~Character()
{
}

void Character::recoverAP()
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
    if (!_weapon || _ap < _weapon->getAPCost())
        return;
    std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
    _weapon->attack();
    _ap -= _weapon->getAPCost();
    enemy->takeDamage(_weapon->getDamage());
    if (enemy->getHP() < 1)
        delete enemy;
}

const std::string Character::getName() const
{
    return _name;
}

int Character::getAp() const
{
    return _ap;
}

AWeapon *Character::getWeapon() const
{
    return _weapon;
}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
    if (character.getWeapon())
        out << character.getName() << " has " << character.getAp() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
    else
        out << character.getName() << " has " << character.getAp() << " AP and is unarmed" << std::endl;
    return out;
}