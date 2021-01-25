/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_PARSER_HPP
#define B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_PARSER_HPP

#include <string>
#include <stack>

class Parser {
public:
    Parser();
    ~Parser();
    void feed(const std::string &);
    int result() const;
    void reset();
private:
    std::stack<char> _operators;
    std::stack<int> _operands;
    int _result;
};

#endif //B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_PARSER_HPP
