/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07M_arthur_robine
** File description:
** Exercice 4
*/
#ifndef B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_BORGQUEEN_HPP
#define B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_BORGQUEEN_HPP

#include "Borg.hpp"

namespace Borg
{
    class BorgQueen {
    public:
        BorgQueen();
        ~BorgQueen();
        bool move(Borg::Ship *ship, Destination dest);
        void fire(Borg::Ship *ship, Federation::Starfleet::Ship *target);
        void destroy(Borg::Ship *ship, Federation::Ship *target);
        bool (Borg::Ship::*movePtr)(Destination d);
        void (Borg::Ship::*firePtr)(Federation::Starfleet::Ship *target);
        void (Borg::Ship::*destroyPtr)(Federation::Ship *target);
    };
}


#endif //B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_BORGQUEEN_HPP
