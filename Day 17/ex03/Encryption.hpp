/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD17_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_ENCRYPTION_HPP
#define B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_ENCRYPTION_HPP

#include <string>
#include "IEncryptionMethod.hpp"

class Encryption {
public:
    Encryption(IEncryptionMethod &obj, void (IEncryptionMethod::*method)(char c));
    ~Encryption();
    void operator()(char c);
    static void encryptString(IEncryptionMethod &encryptionMethod, const std::string &toEncrypt);
    static void decryptString(IEncryptionMethod &encryptionMethod, const std::string &toDecrypt);
private:
    IEncryptionMethod *_obj;
    void (IEncryptionMethod::*_method)(char c);
};

#endif //B_CPP_300_STG_3_1_CPPD17_ARTHUR_ROBINE_ENCRYPTION_HPP
