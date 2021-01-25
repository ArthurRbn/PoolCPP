//
// Created by nicolass on 16/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_CONVEYORBELT_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_CONVEYORBELT_HPP

#include "IConveyorBelt.hpp"

class ConveyorBelt : public AConveyorBelt {
public:
    ConveyorBelt();

    Object *getObject() const;
    Object *IN() override;
    void OUT() override;
    void add(Object *gift) override;
    ~ConveyorBelt() override;
};


#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_CONVEYORBELT_HPP
