/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07M_arthur_robine
** File description:
** Exercice 4
*/
#ifndef B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_ADMIRAL_HPP
#define B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_ADMIRAL_HPP

#include <iostream>
#include "Federation.hpp"

namespace Federation
{
    namespace Starfleet
    {
        class Admiral {
        public:
            Admiral(std::string name);
            ~Admiral();
            void fire(Federation::Starfleet::Ship *ship, Borg::Ship *target);
            bool move(Federation::Starfleet::Ship *ship, Destination dest);
            bool (Federation::Starfleet::Ship::*movePtr)(Destination d);
            void (Federation::Starfleet::Ship::*firePtr)(Borg::Ship *target);
        private:
            std::string _name;
        };
    }
}

#endif //B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_ADMIRAL_HPP
