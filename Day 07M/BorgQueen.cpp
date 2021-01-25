/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07M_arthur_robine
** File description:
** Exercice 4
*/

#include "BorgQueen.hpp"

Borg::BorgQueen::BorgQueen()
{
    this->firePtr = &Borg::Ship::fire;
    this->movePtr = &Borg::Ship::move;
    this->destroyPtr = &Borg::Ship::fire;
}

Borg::BorgQueen::~BorgQueen()
{
}

bool Borg::BorgQueen::move(Borg::Ship *ship, Destination dest)
{
    return (ship->*this->movePtr)(dest);
}

void Borg::BorgQueen::fire(Borg::Ship *ship, Federation::Starfleet::Ship *target)
{
    (ship->*this->firePtr)(target);
}

void Borg::BorgQueen::destroy(Borg::Ship *ship, Federation::Ship *target)
{
    (ship->*this->destroyPtr)(target);
}