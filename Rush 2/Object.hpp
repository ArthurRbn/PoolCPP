//
// Created by nicolass on 15/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_OBJECT_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_OBJECT_HPP


#include <string>
#include <ostream>

class Object {
public:
    Object(const std::string &type, const std::string &SecondType, const std::string &name="");

    const std::string &getType() const;
    const std::string &getSecondType() const;
    const std::string &getName() const;

    virtual ~Object();
protected:
    std::string _type;
    std::string _secondType;
    std::string _name;
};

std::ostream &operator<<(std::ostream &os, const Object &object);

#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_OBJECT_HPP
