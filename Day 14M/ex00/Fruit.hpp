/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-arthur.robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_FRUIT_HPP
#define B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_FRUIT_HPP

#include <iostream>

class Fruit {
public:
    Fruit(int vitamins, const std::string &name);
    ~Fruit();
    Fruit &operator=(const Fruit &copy);
    int getVitamins() const;
    const std::string &getName() const;
protected:
    int _vitamins;
    std::string _name;
};

#endif //B_CPP_300_STG_3_1_CPPD14M_ARTHUR_ROBINE_FRUIT_HPP
