/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_RATATOUILLE_HPP
#define B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_RATATOUILLE_HPP

#include <string>
#include <sstream>

class Ratatouille {
public:
    Ratatouille();
    Ratatouille(Ratatouille const &other);
    ~Ratatouille();
    Ratatouille &operator=(const Ratatouille &rhs);
    Ratatouille &addVegetable(unsigned char);
    Ratatouille &addCondiment(unsigned int);
    Ratatouille &addSpice(double);
    Ratatouille &addSauce(const std::string &);
    std::string kooc();
private:
    std::ostringstream _recipient;
};

#endif //B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_RATATOUILLE_HPP
