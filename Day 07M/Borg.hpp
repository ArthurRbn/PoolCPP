/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07M-arthur.robine
** File description:
** Exercice 1
*/

#ifndef B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_BORG_HPP
#define B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_BORG_HPP

#include <iostream>
#include "WarpSystem.hpp"
#include "Destination.hpp"
#include "Federation.hpp"

namespace Federation
{
    namespace Starfleet
    {
        class Ship;
        class Captain;
        class Ensign;
    }
    class Ship;
}

namespace Borg
{
    class Ship {
    public:
        Ship(int weaponFrequency = 20, short repair = 3);
        ~Ship();
        void setupCore(WarpSystem::Core *core);
        void checkCore();
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
        int getShield();
        void setShield(int shield);
        int getWeaponFrequency();
        void setWeaponFrequency(int frequency);
        short getRepair();
        void setRepair(short repair);
        void fire(Federation::Starfleet::Ship *target);
        void fire(Federation::Ship *target);
        void repair();
    private:
        int _side;
        int _shield;
        int _weaponFrequency;
        short _repair;
        short _maxWarp;
        WarpSystem::Core *core;
        Destination _location;
        Destination _home = UNICOMPLEX;
    };
}

#endif //B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_BORG_HPP
