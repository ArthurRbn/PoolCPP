/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-arthur.robine
** File description:
** Exercice 00
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_SORCERER_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
    std::string getName() const;
    std::string getTitle() const;
    void polymorph(const Victim &victim) const;
private:
    std::string _name;
    std::string _title;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_SORCERER_HPP
