//
// Created by nicolass on 16/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_PAPAXMASTABLE_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_PAPAXMASTABLE_HPP

#include <vector>
#include "ITable.hpp"
#include "Toy.hpp"

class PapaXmasTable : public ITable {
public:
    PapaXmasTable();
    bool check() const override;
    Object *takeToy() override;
    Object *takeBox() override;
    Object *takeGiftPaper() override;
    bool add(Object *object) override;
    std::vector<std::string> whats_on_table() override;

    const std::vector<Object *> &getTable() const;

protected:
    std::vector<Object*> _table;
};


#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_PAPAXMASTABLE_HPP
