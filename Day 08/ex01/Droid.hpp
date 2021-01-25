/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD08-arthur.robine
** File description:
** Exercice 0
*/

#ifndef B_CPP_300_STG_3_1_CPPD08_ARTHUR_ROBINE_DROID_HPP
#define B_CPP_300_STG_3_1_CPPD08_ARTHUR_ROBINE_DROID_HPP

#include <iostream>
#include "DroidMemory.hpp"

class Droid {
public:
    Droid(std::string serial);
    Droid(const Droid & toCopy);
    ~Droid();
    void setId(std::string Id);
    std::string getId() const;
    void setEnergy(size_t Energy);
    size_t getEnergy() const;
    size_t getAttack() const;
    size_t getToughness() const;
    void setStatus(std::string *Status);
    std::string *getStatus() const;
    void setBattleData(DroidMemory *mem);
    DroidMemory *getBattleData() const;
    void operator=(Droid const &copy);
    bool operator==(Droid const &toCompare) const;
    bool operator!=(Droid const &toCompare) const;
    Droid &operator<<(size_t &newEnergy);
private:
    std::string _Id;
    size_t _energy;
    const size_t _attack;
    const size_t _toughness;
    std::string *_status;
    DroidMemory *BattleData;
};

std::ostream& operator<<(std::ostream &out, const Droid &droid);

#endif //B_CPP_300_STG_3_1_CPPD08_ARTHUR_ROBINE_DROID_HPP