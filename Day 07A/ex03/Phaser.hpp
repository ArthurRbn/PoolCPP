/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD07A_arthur_robine
** File description:
** Exercice 03
*/

#ifndef B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_PHASER_HPP
#define B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_PHASER_HPP

class Phaser {
public:
    enum AmmoType {
        REGULAR = 0,
        PLASMA,
        ROCKET,
    };
    Phaser(int maxAmmo = 20, AmmoType type = REGULAR);
    ~Phaser();
    void fire();
    void ejectClip();
    void changeType(AmmoType newType);
    void reload();
    void addAmmo(AmmoType type);
    int getCurrentAmmos();
private:
    static const int Empty = 0;
    int _maxAmmo;
    int _ammo[3];
    int _type;
};

#endif //B_CPP_300_STG_3_1_CPPD07A_ARTHUR_ROBINE_PHASER_HPP
