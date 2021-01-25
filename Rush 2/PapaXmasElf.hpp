//
// Created by nicolass on 15/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_PAPAXMASELF_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_PAPAXMASELF_HPP

#include "IElf.hpp"
#include "PapaXmasTable.hpp"
#include "ConveyorBelt.hpp"

class PapaXmasElf : public IElf
{
    public :

    PapaXmasElf(ITable*);
    ~PapaXmasElf();
    std::vector<std::string> lookAtTable();
    Object *pressIn();
    void wrap(Wrap*, Object*);
    void pressOut();
    bool put_on_table(Object*);

    private :

    class ITable *_table;
    class ConveyorBelt *_conveyor_belt;
    class Object *_in_hand;

};

#endif // B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_PAPAXMASELF_HPP