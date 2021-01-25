/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 03
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_AMATERIA_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
public :
    AMateria(const std::string &type);
    AMateria(const AMateria &copy);
    virtual void operator=(const AMateria &copy);
    virtual ~AMateria();
    const std::string &getType() const;
    virtual unsigned int getXP() const;
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
    virtual void print(ICharacter &target);
private:
    std::string _type;
    unsigned int _xp;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_AMATERIA_HPP
