/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPrush2_nicolas_schneider
** File description:
** Created by arthur,
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fstream>
#include <sstream>
#include "../../lib/pugixml-1.11/src/pugixml.hpp"
#include "xmlGift.hpp"

xmlGift::xmlGift(const std::string &type, const std::string &title)
{
    _type = std::string(type);
    _title = std::string(title);
    _buffer = new char[BUFF_SIZE];
}

xmlGift::~xmlGift()
{
    delete _buffer;
}

static bool fileExists(std::string filename)
{
    std::ifstream f(filename.c_str());
    return f.good();
}

static std::string findFileName()
{
    std::string filename("../XML_handling/gift1.xml");
    int i = 1;

    while (fileExists(filename)) {
        ++i;
        filename = "../XML_handling/gift" + std::to_string(i) + ".xml";
    }
    return filename;
}

void xmlGift::createXML()
{
    pugi::xml_document doc;
    pugi::xml_node giftPaper = doc.append_child("giftPaper");
    pugi::xml_node box = giftPaper.append_child("box");
    pugi::xml_node toy = box.append_child("toy");
    std::stringstream str;
    std::string stringify;

    memset(_buffer, 0, BUFF_SIZE);
    toy.append_attribute("type") = _type.c_str();
    toy.append_attribute("title") = _title.c_str();
    doc.save(str);
    stringify.append(str.str());
    stringify.copy(_buffer, BUFF_SIZE, 0);
}

void xmlGift::sendXML(uint16_t PORT)
{
    int sockfd;
    struct sockaddr_in servaddr;

    memset(&servaddr, 0, sizeof(sockaddr_in));
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);
    sendto(sockfd, _buffer, BUFF_SIZE, MSG_CONFIRM, (const struct sockaddr *) &servaddr, sizeof(servaddr));
    printf("XML sent.\n");
    close(sockfd);
}