/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-nicolas.schneider
** File description:
** Created by arthur,
*/

#include <iostream>
#include "../../lib/pugixml-1.11/src/pugixml.hpp"
#include "XMLParser.hpp"

XMLParser::XMLParser()
{
}

XMLParser::~XMLParser()
{
}

static pugi::xml_node *getToy(pugi::xml_node *box)
{
    auto *toy = new pugi::xml_node;
    if (!box || box->empty())
        return nullptr;
    *toy = box->child("toy");
    if (!box->child("toy")) {
        std::cout << "Invalid file : no toy found in the box. Required packing order : giftPaper < box < toy" << std::endl;
        return nullptr;
    } else if (!(*toy).attribute("type") || !(*toy).attribute("title") || !(*toy).attribute("type").value() || !(*toy).attribute("title").value()) {
        std::cout << "Invalid node : missing attributes in the toy. Required attributes : type, title" << std::endl;
        return nullptr;
    }
    return toy;
}

static pugi::xml_node *getBox(pugi::xml_node *giftPaper)
{
    auto *box = new pugi::xml_node;
    if (!giftPaper || giftPaper->empty())
        return nullptr;
    *box = giftPaper->child("box");
    if (!giftPaper->child("box")) {
        std::cout << "Invalid file : no box found in the giftPaper. Required packing order : giftPaper < box < toy" << std::endl;
        return nullptr;
    }
    return box;
}

static pugi::xml_node *getGift(pugi::xml_document *doc)
{
    auto *gift = new pugi::xml_node;
    *gift = doc->child("giftPaper");
    if (!doc->child("giftPaper")) {
        std::cout << "Invalid file : no giftPaper found. Required packing order : giftPaper < box < toy" << std::endl;
        return nullptr;
    }
    return gift;
}

void XMLParser::unpackGift(pugi::xml_document *doc)
{
    pugi::xml_node *gift = getGift(doc);
    pugi::xml_node *box = getBox(gift);
    pugi::xml_node *toy = getToy(box);
    if (gift && box && toy) {
        std::cout << "Toy type: " << toy->attribute("type").value() << ", toy title: " << toy->attribute("title").value() << std::endl;
        delete gift;
        delete box;
        delete toy;
    }
}

void XMLParser::parseXML()
{
    std::string filename;
    auto *doc = new pugi::xml_document;
    pugi::xml_parse_result result;

    for (int i = 1; 1; ++i) {
        filename = "XML_handling/gift" + std::to_string(i) + ".xml";
        result = (*doc).load_file(filename.c_str());
        if (result) {
            std::cout << "----" << std::endl <<"Santa grabs " << filename << std::endl << "File loading: " << result.description() <<  std::endl;
            this->unpackGift(doc);
        } else {
            std::cout << "----" << std::endl << "File " << filename << " : " << result.description() <<  std::endl;
            break;
        }
    }
    delete doc;
}