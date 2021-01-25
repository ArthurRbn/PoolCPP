/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07A_arthur_robine
** File description:
** Exercice 01
*/

#include "Parts.hpp"

Arms::Arms(std::string serial, bool functionnal)
{
    this->_serial = serial;
    this->_functionnal = functionnal;
}

Arms::~Arms()
{
}

bool Arms::isFunctionnal() const
{
    return this->_functionnal;
}

std::string Arms::serial() const
{
    return this->_serial;
}

void Arms::informations() const
{
    if (this->isFunctionnal())
        std::cout << "\t[Parts] Arms " << this->_serial << " status : OK" << std::endl;
    else
        std::cout << "\t[Parts] Arms " << this->_serial << " status : KO" << std::endl;
}

Legs::Legs(std::string serial, bool functionnal)
{
    this->_serial = serial;
    this->_functionnal = functionnal;
}

Legs::~Legs()
{
}

bool Legs::isFunctionnal() const
{
    return this->_functionnal;
}

std::string Legs::serial() const
{
    return this->_serial;
}

void Legs::informations() const
{
    if (this->isFunctionnal())
        std::cout << "\t[Parts] Legs " << this->_serial << " status : OK" << std::endl;
    else
        std::cout << "\t[Parts] Legs " << this->_serial << " status : KO" << std::endl;
}

Head::Head(std::string serial, bool functionnal)
{
    this->_serial = serial;
    this->_functionnal = functionnal;
}

Head::~Head()
{
}

bool Head::isFunctionnal() const
{
    return this->_functionnal;
}

std::string Head::serial() const
{
    return this->_serial;
}

void Head::informations() const
{
    if (this->isFunctionnal())
        std::cout << "\t[Parts] Head " << this->_serial << " status : OK" << std::endl;
    else
        std::cout << "\t[Parts] Head " << this->_serial << " status : KO" << std::endl;
}
