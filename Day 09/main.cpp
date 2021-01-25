/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD09_arthur_robine
** File description:
** test main D09 ex01
*/

#include <iostream>
#include "Character.hpp"
#include "Warrior.hpp"
#include "Priest.hpp"
#include "Mage.hpp"
#include "Paladin.hpp"

int main()
{
    //ex01
    Character c("poney", 42);
    c.TakeDamage(50);
    c.TakeDamage(200);
    c.TakeDamage(200);

    std::cout << std::endl;
    //ex02
    Warrior warrior("Thor", 42);
    warrior.CloseAttack();
    warrior.Range = Character::RANGE;
    warrior.RangeAttack();
    warrior.TakeDamage(50);
    warrior.Heal();
    warrior.RestorePower();
    warrior.TakeDamage(100);

    std::cout << std::endl;
    //ex03
    Priest priest("pretre", 50);
    Mage mage("mage", 55);
    mage.CloseAttack();
    mage.RangeAttack();
    mage.TakeDamage(20);
    mage.Heal();
    mage.RestorePower();
    mage.TakeDamage(200);
    priest.CloseAttack();
    priest.RangeAttack();
    priest.TakeDamage(20);
    priest.Heal();
    priest.RestorePower();
    priest.TakeDamage(200);

    std::cout << std::endl;
    //ex04
    Paladin paladin("paladin", 70);
    paladin.CloseAttack();
    paladin.RangeAttack();
    paladin.TakeDamage(20);
    std::cout << "intercept" << paladin.Intercept() << std::endl;
    std::cout << "range :" << paladin.Range << std::endl;
    paladin.Heal();
    paladin.RestorePower();
    paladin.TakeDamage(200);
}