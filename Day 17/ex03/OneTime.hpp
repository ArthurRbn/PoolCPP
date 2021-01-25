/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD17_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_ONETIME_HPP
#define B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_ONETIME_HPP

#include <string>
#include "IEncryptionMethod.hpp"

class OneTime: public IEncryptionMethod {
public:
    OneTime(const std::string &key);
    ~OneTime();
    void encryptChar(char plainchar);
    void decryptChar(char cipherchar);
    void reset();
private:
    std::string _key;
    int _idxE;
    int _idxD;
};

#endif //B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_ONETIME_HPP
