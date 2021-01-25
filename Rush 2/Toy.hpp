//
// Created by nicolass on 15/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_TOY_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_TOY_HPP

#include "Object.hpp"

class Toy : public Object {
public:
    Toy(const std::string &type, const std::string &name);
    virtual void isTaken() = 0;
    ~Toy() override;
};


#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_TOY_HPP
