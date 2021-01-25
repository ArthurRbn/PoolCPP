/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 4
*/

#ifndef B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALADOCTOR_HPP
#define B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALADOCTOR_HPP

#include "SickKoala.hpp"

class KoalaDoctor {
    public:
        KoalaDoctor(std::string name);
        ~KoalaDoctor();
        void timeCheck();
        void diagnose(SickKoala *patient);
        std::string getName();
    private:
        std::string name;
        bool work;
};

#endif //B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALADOCTOR_HPP
