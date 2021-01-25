/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 03
*/

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    _type = std::string("cure");
    _xp = 0;
}

Cure::Cure(const AMateria &copy): AMateria(copy.getType())
{
    _type = std::string(copy.getType());
    _xp = copy.getXP();
}

void Cure::operator=(const AMateria &copy)
{
    _xp = copy.getXP();
}

Cure::~Cure()
{
}

Cure *Cure::clone() const
{
    Cure *cure = new Cure;

    cure->_type = std::string(_type);
    cure->_xp = _xp;
    return cure;
}

void Cure::use(ICharacter &target)
{
    _xp += 10;
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

unsigned int Cure::getXP() const
{
    return _xp;
}

void Cure::print(ICharacter &target)
{
    this->use(target);
}
