/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#include <iostream>
#include "Parser.hpp"

Parser::Parser()
{
    _operands = std::stack<int>();
    _operators = std::stack<char>();
    _result = 0;
}

Parser::~Parser()
{
}

static int computeValue(int a, int b, char op)
{
    int result = 0;

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            result = 0;
    }
    return result;
}

static int priority(char op)
{
    switch (op) {
        case '+':
            return 0;
        case '-':
            return 0;
        case '*':
            return 1;
        case '/':
            return 1;
        case '%':
            return 1;
        default:
            return 0;
    }
}

void Parser::feed(const std::string &input)
{
    std::string operators = {"+-*/%"};
    int value = 0;
    int value2 = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        if (input[i] == ' ') {
            continue;
        } else if (input[i] == '(') {
            _operators.push(input[i]);
        } else if (isdigit(input[i])) {
            value = 0;
            while (i < input.length() && isdigit(input[i])) {
                value = value * 10 + input[i++] - 48;
            }
            _operands.push(value);
            i--;
        } else if (input[i] == ')') {
            while (!_operators.empty() && _operators.top() != '(') {
                value = _operands.top();
                _operands.pop();
                value2 = _operands.top();
                _operands.pop();
                _operands.push(computeValue(value2, value, _operators.top()));
                _operators.pop();
            }
            if (!_operators.empty()) {
                _operators.pop();
            }
        } else if (operators.find(input[i]) != std::string::npos) {
            while (!_operators.empty() && priority(input[i]) <= priority(_operators.top()) && _operators.top() != '(') {
                value = _operands.top();
                _operands.pop();
                value2 = _operands.top();
                _operands.pop();
                _operands.push(computeValue(value2, value, _operators.top()));
                _operators.pop();
            }
            _operators.push(input[i]);
        }
    }
    while (!_operators.empty()) {
        value = _operands.top();
        _operands.pop();
        value2 = _operands.top();
        _operands.pop();
        _operands.push(computeValue(value2, value, _operators.top()));
        _operators.pop();
    }
    _result += _operands.top();
    _operands.pop();
}

int Parser::result() const
{
    return _result;
}

void Parser::reset()
{
    _result = 0;
    while (!_operands.empty())
        _operands.pop();
    while (!_operators.empty())
        _operators.pop();
}