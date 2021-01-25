//
// Created by nicolass on 15/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_LITTLEPONY_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_LITTLEPONY_HPP


#include "Toy.hpp"

class LittlePony : public Toy {
public:
    explicit LittlePony(const std::string &name);
    void isTaken() override;
    ~LittlePony() override;
};


#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_LITTLEPONY_HPP
