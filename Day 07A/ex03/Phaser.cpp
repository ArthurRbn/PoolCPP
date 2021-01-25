/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07A_arthur_robine
** File description:
** Exercice 03
*/

#include <iostream>
#include "Phaser.hpp"
#include "Sounds.hpp"

Phaser::Phaser(int maxAmmo, AmmoType type)
{
    _type = type;
    _maxAmmo = maxAmmo;
    for (int i = 0; i <= ROCKET; ++i) {
        _ammo[i] = _maxAmmo;
    }
}

Phaser::~Phaser()
{
}

void Phaser::fire()
{
    if (_ammo[_type] == Empty)
        std::cout << "Clip empty, please reload" << std::endl;
    else if (_ammo[_type] != Empty) {
        _ammo[_type] -= 1;
        if (_type == REGULAR)
            std::cout << Sounds::Regular << std::endl;
        else if (_type == PLASMA)
            std::cout << Sounds::Plasma << std::endl;
        else if (_type == ROCKET)
            std::cout << Sounds::Rocket << std::endl;
    }

}

void Phaser::ejectClip()
{
    _ammo[_type] = 0;
}

void Phaser::changeType(AmmoType newType)
{
    char *strings[3] = {
            "regular",
            "plasma",
            "rocket"
    };

    _type = newType;
    std::cout << "Switching ammo to type: " << strings[_type] << std::endl;
}

void Phaser::reload()
{
    _ammo[_type] = _maxAmmo;
    std::cout << "Reloading..." << std::endl;
}

void Phaser::addAmmo(AmmoType type)
{
    if (_ammo[type] < _maxAmmo)
        _ammo[type] += 1;
    else if (_ammo[type] == _maxAmmo)
        std::cout << "Clip full" << std::endl;
}

int Phaser::getCurrentAmmos()
{
    return _ammo[_type];
}