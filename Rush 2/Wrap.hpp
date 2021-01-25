//
// Created by nicolass on 15/01/2021.
//

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_WRAP_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_WRAP_HPP


#include "Object.hpp"

class Wrap : public Object
{
    public :

    Wrap(const std::string &type);
    ~Wrap();
    void openMe();
    void closeMe();
    bool getWrapIsOpen() const;
    bool getWrapIsFull() const;
    void wrapMeThat(Object *);
    Object *getObject(void);
    Wrap *takeWrap();

    private :

    std::string _wrap_type;
    bool _wrap_is_open;
    bool _wrap_is_full;
    Object *_obj;
};

#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_WRAP_HPP