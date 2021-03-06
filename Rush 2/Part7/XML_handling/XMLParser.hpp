/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPrush2_nicolas_schneider
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_XMLPARSER_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_XMLPARSER_HPP

#include "../../lib/pugixml-1.11/src/pugixml.hpp"

class XMLParser {
public:
    XMLParser();
    ~XMLParser();
    void parseXML();
    void unpackGift(pugi::xml_document *doc);
};

#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_XMLPARSER_HPP
