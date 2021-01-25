/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** Exercice 1
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_CHARACTER_HPP
#define B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_CHARACTER_HPP

#include <iostream>

class Character {
    public:
        Character(const std::string &name, int level);
        ~Character();
        enum AttackRange {
            CLOSE,
            RANGE,
        };
        AttackRange Range;
        const std::string &getName() const;
        int getLvl() const;
        int getPv() const;
        int getPower() const;
        int getStrengh() const;
        int getStamina() const;
        int getIntelligence() const;
        int getSpirit() const;
        int getAgility() const;
        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();
        void TakeDamage(int damage);
    protected:
        std::string _name;
        int _level;
        int _pv;
        int _power;
        int _strengh;
        int _stamina;
        int _intelligence;
        int _spirit;
        int _agility;
};

#endif //B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_CHARACTER_HPP
