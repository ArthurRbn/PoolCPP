/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD17_arthur_robine
** File description:
** Created by arthur,
*/

#include <iostream>
#include "Cesar.hpp"

Cesar::Cesar()
{
    _shift = 3;
    _shift2 = 3;
}

Cesar::~Cesar()
{
}

void Cesar::encryptChar(char plainchar)
{
    char output = plainchar;

    if (('a' <= plainchar && plainchar <= 'z')) {
        output = 97 + (((plainchar - 97) + _shift) % 26);
    } else if (('A' <= plainchar && plainchar <= 'Z')) {
        output = 65 + (((plainchar - 65) + _shift) % 26);
    }
    _shift++;
    std::cout << output;
}

void Cesar::decryptChar(char cipherchar)
{
    char output = 0;

    output = cipherchar;
    int offset = 0;
    if (('a' <= cipherchar && cipherchar <= 'z')) {
        offset = cipherchar - 97;
        output = 97 + (offset < _shift2 % 26 ? 26 - ((_shift2 - offset) % 26) : offset - _shift2 % 26);
    } else if (('A' <= cipherchar && cipherchar <= 'Z')) {
        offset = cipherchar - 65;
        output = 65 + (offset < _shift2 % 26 ? 26 - ((_shift2 - offset) % 26) : offset - _shift2 % 26);
    }
    _shift2++;
    std::cout << output;
}

void Cesar::reset()
{
    _shift = 3;
    _shift2 = 3;
}