/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 01
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_AENEMY_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_AENEMY_HPP

#include <iostream>

class AEnemy {
public:
    AEnemy(int hp, const std::string &type);
    virtual ~AEnemy();
    virtual void takeDamage(int damage);
    const std::string getType() const;
    int getHP() const;
private:
    int _hp;
    std::string _type;
};
#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_AENEMY_HPP
