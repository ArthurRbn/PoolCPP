/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD13_arthur_robine
** File description:
** Created by arthur,
*/

#include "Buzz.hpp"

Buzz::Buzz(const std::string &name, const std::string &filename): Toy(BUZZ, name, filename)
{
}

Buzz::~Buzz()
{
}

void Buzz::speak(const std::string &toSay)
{
    std::cout << "BUZZ: " << _name << " \"" << toSay << "\"" << std::endl;
}

bool Buzz::speak_es(const std::string &toSay)
{
    std::cout << "BUZZ: " << _name << " senorita \"" << toSay << "\" senorita" << std::endl;
    return true;
}