/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD17_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_CESAR_HPP
#define B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_CESAR_HPP

#include "IEncryptionMethod.hpp"

class Cesar: public IEncryptionMethod {
public:
    Cesar();
    ~Cesar();
    void encryptChar(char plainchar);
    void decryptChar(char cipherchar);
    void reset();
private:
    int _shift;
    int _shift2;
};

#endif //B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_CESAR_HPP
