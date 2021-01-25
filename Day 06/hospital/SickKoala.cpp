/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 2
*/

#include "SickKoala.hpp"
#include <iostream>

SickKoala::SickKoala(std::string str)
{
    this->name = str;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

std::string SickKoala::getName()
{
    return this->name;
}

void SickKoala::poke(void)
{
    std::cout << "Mr." << this->name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
    if (str.compare("Mars") == 0) {
        std::cout << "Mr." << this->name << ": Mars, and it kreogs!" << std::endl;
        return true;
    } else if (str.compare("Kinder") == 0) {
        std::cout << "Mr." << this->name << ": There is a toy inside!" << std::endl;
        return true;
    } else
        std::cout << "Mr." << this->name << ": Goerkreog!" << std::endl;
    return false;
}

void SickKoala::overDrive(std::string str)
{
    std::string toSearch("Kreog!");
    std::string toReplace("1337!");
    size_t pos = str.find(toSearch);

    while( pos != std::string::npos) {
        str.replace(pos, toSearch.size(), toReplace);
        pos = str.find(toSearch, 0);
    }
    std::cout << "Mr." << this->name << ": " << str << std::endl;
}