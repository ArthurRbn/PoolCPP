/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 03
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_ICE_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
public:
    Ice();
    Ice(const AMateria &copy);
    void operator=(const AMateria &copy);
    ~Ice() override;
    Ice *clone() const override;
    void use(ICharacter &target) override;
    unsigned int getXP() const override;
    virtual void print(ICharacter &target);
private:
    std::string _type;
    int _xp;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_ICE_HPP
