/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#include <fstream>
#include "BF_Translator.hpp"

BF_Translator::BF_Translator()
{
    _actions['+'] = "buff[i]++;";
    _actions['-'] = "buff[i]--;";
    _actions['>'] = "++i;";
    _actions['<'] = "--i;";
    _actions['.'] = "write(1, &buff[i], 1);";
    _actions[','] = "read(0, &buff[i], 1);";
    _actions['['] = "while (buff[i]) {";
    _actions[']'] = "}";
}

BF_Translator::~BF_Translator()
{
}

int BF_Translator::translate(const std::string &in, const std::string &out)
{
    std::ifstream input(in);
    std::ofstream output(out);
    char current;
    if (!input.good() || !output.good())
        return -1;
    output << "#include <unistd.h>" << std::endl << "#include <string.h>" << std::endl << "int main() {" << std::endl;
    output << "char buff[60*1024];" << std::endl << "memset(buff, 0, 60 * 1024);" << std::endl << "int i = 0;" << std::endl;
    while (input.good()) {
        current = input.get();
        if (_actions.find(current) != _actions.end())
            output << _actions[current] << std::endl;
    }
    output << "return 0;" << std::endl << "}";
    input.close();
    output.close();
    return 0;
}
