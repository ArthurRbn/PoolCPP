/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 03
*/

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    _type = std::string("ice");
    _xp = 0;
}

Ice::Ice(const AMateria &copy): AMateria(copy.getType())
{
    _type = std::string(copy.getType());
    _xp = copy.getXP();
}

void Ice::operator=(const AMateria &copy)
{
    _xp = copy.getXP();
}

Ice::~Ice()
{
}

Ice *Ice::clone() const
{
    Ice *ice = new Ice;

    ice->_type = std::string(_type);
    ice->_xp = _xp;
    return ice;
}

void Ice::use(ICharacter &target)
{
    _xp += 10;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

unsigned int Ice::getXP() const
{
    return _xp;
}

void Ice::print(ICharacter &target)
{
    this->use(target);
}
