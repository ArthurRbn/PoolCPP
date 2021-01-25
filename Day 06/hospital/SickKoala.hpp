/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD06-arthur.robine
** File description:
** Exercice 2
*/

#ifndef B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_SICKKOALA_HPP
#define B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_SICKKOALA_HPP

#include <iostream>

class SickKoala {
    public:
        SickKoala(std::string str);
        ~SickKoala();
        void poke(void);
        bool takeDrug(std::string str);
        void overDrive(std::string str);
        std::string getName();
    private:
        std::string name;
};

#endif //B_CPP_300_STG_3_1_CPPD06_ARTHUR_ROBINE_SICKKOALA_HPP
