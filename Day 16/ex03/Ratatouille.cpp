/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#include "Ratatouille.hpp"

Ratatouille::Ratatouille()
{
    _recipient = std::ostringstream();
}

Ratatouille::Ratatouille(const Ratatouille &other)
{
    _recipient = std::ostringstream(std::ios_base::app|std::ios_base::in|std::ios_base::out);
    _recipient <<  other._recipient.str();
}

Ratatouille::~Ratatouille()
{
}

Ratatouille &Ratatouille::operator=(const Ratatouille &rhs)
{
    _recipient.clear();
    _recipient = std::ostringstream(std::ios_base::app|std::ios_base::in|std::ios_base::out);
    _recipient << rhs._recipient.str();
    return *this;
}

Ratatouille &Ratatouille::addVegetable(unsigned char vegetable)
{
    _recipient << vegetable;
    return *this;
}

Ratatouille &Ratatouille::addCondiment(unsigned int condiment)
{
    _recipient << condiment;
    return *this;
}

Ratatouille &Ratatouille::addSpice(double spice)
{
    _recipient << spice;
    return *this;
}

Ratatouille &Ratatouille::addSauce(const std::string &sauce)
{
    _recipient << sauce;
    return *this;
}

std::string Ratatouille::kooc()
{
    return _recipient.str();
}
