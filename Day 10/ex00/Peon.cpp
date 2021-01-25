/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-arthur.robine
** File description:
** Exercice 00
*/

#include <iostream>
#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}