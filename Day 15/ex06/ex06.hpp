/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD15_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX03_HPP
#define B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX03_HPP

#include <sstream>

template<typename T>
std::string setForm(T)
{
    return std::string("[???]");
}

template<>
std::string setForm(int val)
{
    std::stringstream str;
    std::string result("[int:");
    str << val;
    result += str.str() + "]";
    return result;
}

template<>
std::string setForm(float val)
{
    std::stringstream str;
    std::string result("[float:");
    str << val;
    result += str.str() + "f]";
    return result;
}

template<>
std::string setForm(std::string val)
{
    std::string result("[string:\"");
    result += val + "\"]";
    return result;
}

template<typename A, typename B = A>
struct Tuple
{
    A a;
    B b;
    std::string toString() const {
        std::string str;
        str = "[TUPLE " + setForm(a) + " " + setForm(b) + "]";
        return str;
    }
};

#endif //B_CPP_300_STG_3_1_CPPD15_ARTHUR_ROBINE_EX03_HPP
