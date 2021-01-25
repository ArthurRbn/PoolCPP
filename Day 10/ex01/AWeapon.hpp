/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 01
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_AWEAPON_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_AWEAPON_HPP

#include <iostream>

class AWeapon {
public:
    AWeapon(const std::string &name, int apcost, int damage);
    virtual ~AWeapon();
    const std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
private:
    std::string _name;
    int _apcost;
    int _damage;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_AWEAPON_HPP
