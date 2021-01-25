/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD13_arthur_robine
** File description:
** Created by arthur,
*/

#include "Woody.hpp"

Woody::Woody(const std::string &name, const std::string &filename): Toy(WOODY, name, filename)
{
}

Woody::~Woody()
{
}

void Woody::speak(const std::string &toSay)
{
    std::cout << "WOODY: " << _name << " \"" << toSay << "\"" << std::endl;
}
