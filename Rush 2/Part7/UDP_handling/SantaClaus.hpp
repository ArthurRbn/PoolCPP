/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPrush2_nicolas_schneider
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_WARPMACHINE_HPP
#define B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_SANTACLAUS_HPP

#define PORT 8080

class SantaClaus {
public:
    SantaClaus();
    ~SantaClaus();
    void initSock();
    void magicalSock();
private:
    struct sockaddr_in *_server;
    struct sockaddr_in *_client;
    char *_buffer;
    int _sock;
};

void magicalSock();

#endif //B_CPP_300_STG_3_1_CPPRUSH2_NICOLAS_SCHNEIDER_WARPMACHINE_HPP
