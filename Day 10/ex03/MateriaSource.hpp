/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD10_arthur_robine
** File description:
** Exercice 03
*/

#ifndef B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_MATERIASOURCE_HPP
#define B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_MATERIASOURCE_HPP

#include <vector>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
    MateriaSource();
    ~MateriaSource() override;
    AMateria *createMateria(std::string const &type) override;
    void learnMateria(AMateria *) override;
private:
    std::vector<AMateria *> _source;
};

#endif //B_CPP_300_STG_3_1_CPPD10_ARTHUR_ROBINE_MATERIASOURCE_HPP
