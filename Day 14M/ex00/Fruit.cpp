/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-arthur.robine
** File description:
** Created by arthur,
*/

#include "Fruit.hpp"

Fruit::Fruit(int vitamins, const std::string &name)
{
    _vitamins = vitamins;
    _name = std::string(name);
}

Fruit::~Fruit()
{
}

int Fruit::getVitamins() const
{
    return _vitamins;
}

const std::string &Fruit::getName() const
{
    return _name;
}

Fruit &Fruit::operator=(const Fruit &copy)
{
    _vitamins = copy.getVitamins();
    return *this;
}