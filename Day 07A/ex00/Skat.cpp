/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-arthur.robine
** File description:
** Exercice 0
*/

#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks)
{
    this->_name = name;
    this->_stock = stimPaks;
}

Skat::~Skat()
{
}

int &Skat::stimPaks()
{
    return this->_stock;
}

const std::string &Skat::name()
{
    return this->_name;
}

void Skat::shareStimPaks(int number, int &stock)
{
    if (number > this->_stock) {
        std::cout << "Don't be greedy" << std::endl;
        return;
    }
    std::cout << "Keep the change." << std::endl;
    stock += number;
    this->_stock -= number;
}

void Skat::addStimPaks(unsigned int number)
{
    if (number == 0)
        std::cout << "Hey boya, did you forget something?";
    this->_stock += number;
}

void Skat::useStimPaks()
{
    if (this->_stock > 0) {
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
        this->_stock--;
    } else {
        std::cout << "Mediiiiiic" << std::endl;
    }
}

void Skat::status()
{
    std::cout << "Soldier " << this->_name << " reporting " << this->_stock << " stimpaks remaining sir!" << std::endl;
}