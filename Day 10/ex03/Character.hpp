/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 03
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_CHARACTER_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_CHARACTER_HPP

#include <vector>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter {
public:
    Character(const std::string &name);
    Character(Character const &copy);
    ~Character() override;
    std::string const &getName() const override;
    void equip(AMateria* m) override;
    void unequip(int idx) override;
    void use(int idx, ICharacter& target) override;
    void operator=(const Character &copy);
private:
    std::string _name;
    std::vector<AMateria *> _equiped;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_CHARACTER_HPP
