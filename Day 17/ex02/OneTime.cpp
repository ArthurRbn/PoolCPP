/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD17_arthur_robine
** File description:
** Created by arthur,
*/

#include <iostream>
#include "OneTime.hpp"

OneTime::OneTime(const std::string &key)
{
    _key = key;
    _idxE = 0;
    _idxD = 0;
}

OneTime::~OneTime()
{
}

void OneTime::encryptChar(char plainchar)
{
    char output = plainchar;
    int key_off = 0;

    if ('a' <= _key[_idxE % _key.size()] && _key[_idxE % _key.size()] <= 'z')
        key_off = _key[_idxE % _key.size()] - 97;
    else if ('A' <= _key[_idxE % _key.size()] && _key[_idxE % _key.size()] <= 'Z')
        key_off = _key[_idxE % _key.size()] - 65;
    if (('a' <= plainchar && plainchar <= 'z')) {
        output = 97 + (((plainchar - 97) + key_off) % 26);
    } else if (('A' <= plainchar && plainchar <= 'Z')) {
        output = 65 + (((plainchar - 65) + key_off) % 26);
    }
    _idxE++;
    std::cout << output;
}

void OneTime::decryptChar(char cipherchar)
{
    char output = 0;
    int key_off = 0;

    output = cipherchar;
    if ('a' <= _key[_idxD % _key.size()] && _key[_idxD % _key.size()] <= 'z')
        key_off = _key[_idxD % _key.size()] - 97;
    else if ('A' <= _key[_idxD % _key.size()] && _key[_idxD % _key.size()] <= 'Z')
        key_off = _key[_idxD % _key.size()] - 65;
    int offset = 0;
    if (('a' <= cipherchar && cipherchar <= 'z')) {
        offset = cipherchar - 97;
        output = 97 + (offset < key_off % 26 ? 26 - ((key_off - offset) % 26) : offset - key_off % 26);
    } else if (('A' <= cipherchar && cipherchar <= 'Z')) {
        offset = cipherchar - 65;
        output = 65 + (offset < key_off % 26 ? 26 - ((key_off - offset) % 26) : offset - key_off % 26);
    }
    _idxD++;
    std::cout << output;
}

void OneTime::reset()
{
    _idxD = 0;
    _idxE = 0;
}
