/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD08-arthur.robine
** File description:
** Exercice 1
*/

#ifndef B_CPP_300_STG_3_1_CPPD08_ARTHUR_ROBINE_DROIDMEMORY_HPP
#define B_CPP_300_STG_3_1_CPPD08_ARTHUR_ROBINE_DROIDMEMORY_HPP

#include <iostream>

class DroidMemory {
public:
    DroidMemory();
    ~DroidMemory();
    void setFingerprint(size_t Fingerprint);
    size_t getFingerprint() const;
    void setExp(size_t Exp);
    size_t getExp() const;
    DroidMemory &operator<<(DroidMemory &mem);
    DroidMemory &operator>>(DroidMemory &mem);
    DroidMemory &operator+=(DroidMemory &mem);
    DroidMemory &operator+=(size_t xp);
    DroidMemory &operator+(DroidMemory &mem);
    DroidMemory &operator+(size_t xp);
private:
    size_t _Fingerprint;
    size_t _Exp;
};

std::ostream& operator<<(std::ostream &out, DroidMemory &mem);

#endif //B_CPP_300_STG_3_1_CPPD08_ARTHUR_ROBINE_DROIDMEMORY_HPP
