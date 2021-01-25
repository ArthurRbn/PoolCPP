//
// Created by nicolass on 15/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_IELF_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_IELF_HPP

#include <vector>
#include "Wrap.hpp"

class IElf
{
    public :

    virtual ~IElf() = default;
    virtual std::vector<std::string> lookAtTable() = 0;
    virtual Object *pressIn() = 0;
    virtual void wrap(Wrap*, Object*) = 0;
    virtual void pressOut() = 0;
    virtual bool put_on_table(Object*) = 0;
};

#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_IELF_HPP