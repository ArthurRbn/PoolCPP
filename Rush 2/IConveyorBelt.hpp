//
// Created by nicolass on 16/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_ICONVEYORBELT_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_ICONVEYORBELT_HPP

#include "Object.hpp"

class IConveyorBelt {
public:
    virtual ~IConveyorBelt() = default;
    virtual Object *IN() = 0;
    virtual void OUT() = 0;
    virtual void add(Object *gift) = 0;
};

class AConveyorBelt : public IConveyorBelt {
public:
    virtual ~AConveyorBelt() = default;
protected:
    Object *_object;
};

IConveyorBelt *createConveyorBelt();

#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_ICONVEYORBELT_HPP
