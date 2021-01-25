/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07M-arthur.robine
** File description:
** Exercice 0
*/

#ifndef B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_FEDERATION_HPP
#define B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_FEDERATION_HPP

#include <iostream>
#include "WarpSystem.hpp"
#include "Borg.hpp"
#include "Destination.hpp"

namespace Borg
{
    class Ship;
}

namespace Federation
{
    namespace Starfleet {
        class Captain {
        public:
            Captain(std::string name);
            ~Captain();
            int getAge();
            std::string getName();
            void setAge(int age);
        private:
            std::string _name;
            int _age;
        };
        class Ship {
        public:
            Ship();
            Ship(int length, int width, std::string name, short maxWarp, int torpedo = 0);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            void promote(Captain *captain);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield();
            void setShield(int shield);
            int getTorpedo();
            void setTorpedo(int torpedo);
            void fire(Borg::Ship *target);
            void fire(int torpedoes, Borg::Ship *target);
        private:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core *core;
            Captain *captain;
            Destination _location;
            Destination _home = EARTH;
            int _shield;
            int _photonTorpedo;
        };
        class Ensign {
        public:
            Ensign(std::string name);
            ~Ensign();
        private:
            std::string _name;
        };
    }
    class Ship {
    public:
        Ship(int length, int width, std::string name);
        ~Ship();
        void setupCore(WarpSystem::Core *core);
        void checkCore();
        WarpSystem::Core *getCore();
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
    private:
        int _length;
        int _width;
        std::string _name;
        short _maxWarp;
        WarpSystem::Core *core;
        Destination _location;
        Destination _home = VULCAN;
    };
}

#endif //B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_FEDERATION_HPP
