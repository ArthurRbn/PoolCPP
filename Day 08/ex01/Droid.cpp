/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD08-arthur.robine
** File description:
** Exercice 0
*/

#include <cstddef>
#include <iostream>
#include <ostream>
#include "Droid.hpp"

Droid::Droid(std::string serial): _Id(serial),
                                    _energy(50),
                                    _attack(25),
                                    _toughness(15),
                                    _status(new std::string("Standing by")),
                                    BattleData(new DroidMemory)
{
    std::cout << "Droid '" << _Id << "' Activated" << std::endl;
}

Droid::Droid(const Droid &toCopy): _Id(toCopy.getId()),
                                    _energy(toCopy.getEnergy()),
                                    _attack(toCopy.getAttack()),
                                   _toughness(toCopy.getToughness()),
                                   _status(new std::string(*toCopy.getStatus()))
{
    std::cout << "Droid '" << _Id << "' Activated, Memory Dumped" << std::endl;
}

void Droid::operator=(Droid const &copy)
{
    _Id = copy.getId();
    _status = new std::string(*copy.getStatus());
    _energy = copy.getEnergy();
}

Droid::~Droid()
{
    std::cout << "Droid '" << _Id << "' Destroyed" << std::endl;
}

void Droid::setId(std::string Id)
{
    _Id = Id;
}

std::string Droid::getId() const
{
    return _Id;
}

void Droid::setEnergy(size_t Energy)
{
    _energy = Energy;
    if (_energy > 100)
        _energy = 100;
}

size_t Droid::getEnergy() const
{
    return _energy;
}

size_t Droid::getAttack() const
{
    const size_t attack = _attack;
    return attack;
}

size_t Droid::getToughness() const
{
    const size_t tough = _toughness;
    return tough;
}

void Droid::setStatus(std::string *Status)
{
    _status = new std::string(*Status);
}

std::string *Droid::getStatus() const
{
    return _status;
}

bool Droid::operator==(Droid const &toCompare) const
{
    if (*_status == *toCompare.getStatus())
        return true;
    else
        return false;
}

bool Droid::operator!=(Droid const &toCompare) const
{
    if (*_status != *toCompare.getStatus())
        return true;
    else
        return false;
}

Droid &Droid::operator<<(size_t &newEnergy)
{
    size_t diff = 100 - _energy;

    if (diff > newEnergy)
        diff = newEnergy;
    _energy += diff;
    newEnergy -= diff;
    return *this;
}

void Droid::setBattleData(DroidMemory *mem)
{
    this->BattleData = mem;
}

DroidMemory *Droid::getBattleData() const
{
    return this->BattleData;
}

std::ostream &operator<<(std::ostream &out, const Droid &droid)
{
    out << "Droid '" << droid.getId() << "', " << *droid.getStatus() << ", " << droid.getEnergy();
    return out;
}