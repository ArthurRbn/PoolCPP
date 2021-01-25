//
// Created by nicolass on 16/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_ITABLE_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_ITABLE_HPP

#include "Object.hpp"

class ITable {
public:
    virtual ~ITable() = default;
    virtual bool check() const = 0;
    virtual Object *takeToy() = 0;
    virtual Object *takeBox() = 0;
    virtual Object *takeGiftPaper() = 0;
    virtual bool add(Object *object) = 0;
    virtual std::vector<std::string> whats_on_table() = 0;
};

ITable *createTable();

#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_ITABLE_HPP
