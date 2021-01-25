/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 3
*/

#ifndef B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALANURSE_HPP
#define B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALANURSE_HPP

#include "SickKoala.hpp"

class KoalaNurse {
    public:
        KoalaNurse(int id);
        ~KoalaNurse();
        int getID();
        void giveDrug(std::string Drug, SickKoala *patient);
        std::string readReport(std::string);
        void timeCheck(void);
    private:
        int ID;
        bool work;
};

#endif //B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_KOALANURSE_HPP
