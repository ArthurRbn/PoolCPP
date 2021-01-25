/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 03
*/

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type)
{
    _type = std::string(type);
    _xp = 0;
}

AMateria::AMateria(const AMateria &copy)
{
    _type = std::string(copy.getType());
    _xp = copy.getXP();
}

AMateria::~AMateria()
{
}

unsigned int AMateria::getXP() const
{
    return _xp;
}

const std::string &AMateria::getType() const
{
    return _type;
}

AMateria *AMateria::clone() const
{
    auto materia = new AMateria(_type);

    materia->_xp = _xp;
    return materia;
}

void AMateria::use(ICharacter &target)
{
    _xp += 10;
    print(target);
}

void AMateria::operator=(const AMateria &copy)
{
    _xp = copy.getXP();
}

void AMateria::print(ICharacter &target)
{
    (void)target;
}