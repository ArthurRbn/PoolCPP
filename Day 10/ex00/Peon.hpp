/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-arthur.robine
** File description:
** Exercice 00
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_PEON_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_PEON_HPP

#include "Victim.hpp"

class Peon: public Victim {
public:
    Peon(std::string name);
    ~Peon();
    void getPolymorphed() const;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_PEON_HPP
