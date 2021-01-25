/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPrush2_nicolas_schneider
** File description:
** Created by arthur,
*/

#include <fstream>
#include "xmlGift.hpp"
#include "../lib/pugixml-1.11/src/pugixml.hpp"

xmlGift::xmlGift(const std::string &type, const std::string &title)
{
    _type = std::string(type);
    _title = std::string(title);
}

xmlGift::~xmlGift()
{
}

static bool fileExists(std::string filename)
{
    std::ifstream f(filename.c_str());
    return f.good();
}

static std::string findFileName()
{
    std::string filename("XML_result/gift1.xml");
    int i = 1;

    while (fileExists(filename)) {
        ++i;
        filename = "XML_result/gift" + std::to_string(i) + ".xml";
    }
    return filename;
}

void xmlGift::createXML()
{
    std::string filename = findFileName();
    std::ofstream file(filename.c_str());
    pugi::xml_document doc;
    pugi::xml_node giftPaper = doc.append_child("giftPaper");
    pugi::xml_node box = giftPaper.append_child("box");
    pugi::xml_node toy = box.append_child("toy");

    toy.append_attribute("type") = _type.c_str();
    toy.append_attribute("title") = _title.c_str();
    doc.save_file(filename.c_str());
}