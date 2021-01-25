//
// Created by nicolass on 15/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_TEDDY_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_TEDDY_HPP

#include "Toy.hpp"

class Teddy : public Toy {
public:
    explicit Teddy(const std::string &name);
    void isTaken() override;
    ~Teddy() override;
};


#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_TEDDY_HPP
