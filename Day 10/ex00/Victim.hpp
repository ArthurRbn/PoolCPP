/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-arthur.robine
** File description:
** Exercice 00
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_VICTIM_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_VICTIM_HPP

#include <iostream>

class Victim {
public:
    Victim(std::string name);
    ~Victim();
    std::string getName() const;
    virtual void getPolymorphed() const;
protected:
    std::string _name;
};

std::ostream &operator<<(std::ostream &out, const Victim &victim);

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_VICTIM_HPP
