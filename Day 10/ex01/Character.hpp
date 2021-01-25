/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 01
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_CHARACTER_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character {
public:
    Character(const std::string &name);
    virtual ~Character();
    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(AEnemy *enemy);
    const std::string getName() const;
    int getAp() const;
    AWeapon *getWeapon() const;
private:
    std::string _name;
    int _ap;
    AWeapon *_weapon;
};

std::ostream& operator<<(std::ostream &out, const Character &character);

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_CHARACTER_HPP