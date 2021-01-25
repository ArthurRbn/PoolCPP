/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07M-arthur.robine
** File description:
** Exercice 1
*/

#include <iostream>
#include "Borg.hpp"

Borg::Ship::Ship(int weaponFrequency, short repair)
{
    this->_side = 300;
    this->_maxWarp = 9;
    this->_location = this->_home;
    this->_shield = 100;
    this->_weaponFrequency = weaponFrequency;
    this->_repair = repair;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
    std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
    std::cout << "Resistance is futile." << std::endl;
}

Borg::Ship::~Ship()
{
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    this->core = core;
}

void Borg::Ship::checkCore()
{
    if (this->core && this->core->checkReactor()->isStable())
        std::cout << "Everything is in order." << std::endl;
    else if (this->core && !this->core->checkReactor()->isStable())
        std::cout << "Critical failure imminent." << std::endl;
}

bool Borg::Ship::move(int warp, Destination d)
{
    bool val;

    if (warp <= this->_maxWarp && d != this->_location && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = d;
    return val;
}

bool Borg::Ship::move(int warp)
{
    bool val;

    if (warp <= this->_maxWarp && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = this->_home;
    return val;
}

bool Borg::Ship::move(Destination d)
{
    bool val;

    if (d != this->_location && this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = d;
    return val;
}

bool Borg::Ship::move()
{
    bool val;

    if (this->core->checkReactor()->isStable())
        val = true;
    else
        val = false;
    if (val)
        this->_location = this->_home;
    return val;
}

int Borg::Ship::getShield()
{
    return this->_shield;
}

void Borg::Ship::setShield(int shield)
{
    this->_shield = shield;
}

int Borg::Ship::getWeaponFrequency()
{
    return this->_weaponFrequency;
}

void Borg::Ship::setWeaponFrequency(int frequency)
{
    this->_weaponFrequency = frequency;
}

short Borg::Ship::getRepair()
{
    return this->_repair;
}

void Borg::Ship::setRepair(short repair)
{
    this->_repair = repair;
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
    int shield = target->getShield();

    shield -= this->getWeaponFrequency();
    target->setShield(shield);
    std::cout << "Firing on target with " << this->getWeaponFrequency() << "GW frequency." << std::endl;
}

void Borg::Ship::fire(Federation::Ship *target)
{
    target->getCore()->checkReactor()->setStability(false);
    std::cout << "Firing on target with " << this->getWeaponFrequency() << "GW frequency." << std::endl;
}

void Borg::Ship::repair()
{
    short repair = this->getRepair();

    if (repair > 0) {
        repair--;
        this->setRepair(repair);
        this->setShield(100);
        std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
    } else {
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
    }
}