#include <cstdlib>
#include <unistd.h>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string>
#include <iostream>
#include "SantaClaus.hpp"
#include "../XML_handling/XMLParser.hpp"
#include "../XML_handling/xmlGift.hpp"
#include "../XML_handling/XMLParser.hpp"

SantaClaus::SantaClaus()
{
    _buffer = new char[BUFF_SIZE];
    _server = new sockaddr_in;
    _client = new sockaddr_in;
    _sock = 0;
}

SantaClaus::~SantaClaus()
{
    delete _buffer;
    delete _server;
    delete _client;
}

void SantaClaus::initSock()
{
    memset(_server, 0, sizeof(struct sockaddr_in));
    memset(_client, 0, sizeof(struct sockaddr_in));
    _sock = socket(AF_INET, SOCK_DGRAM, 0);
    if (_sock < 0) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }
    _server->sin_family = AF_INET;         //IPV4
    _server->sin_addr.s_addr = INADDR_ANY; //Accept any IP adress
    _server->sin_port = htons(PORT);       //Convert port to network byte order
    if (bind(_sock, (struct sockaddr *)_server, sizeof(*_server)) < 0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
}

void SantaClaus::magicalSock()
{
    auto *doc = new pugi::xml_document;
    XMLParser parser;

    while (1) {
        recvfrom(_sock, _buffer, BUFF_SIZE, MSG_WAITALL, (struct sockaddr *)_client, reinterpret_cast<socklen_t *>(sizeof(_client)));
        doc->load_buffer(_buffer, BUFF_SIZE);
        std::cout << "A gift just popped in the magical sock !" << std::endl;
        parser.unpackGift(doc);
        memset(_buffer, 0, BUFF_SIZE);
    }
    delete doc;
    close(_sock);
}