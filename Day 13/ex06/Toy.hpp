/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD13_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_TOY_HPP
#define B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_TOY_HPP

#include <iostream>
#include "Picture.hpp"

class Toy {
public:
    enum ToyType {
        BASIC_TOY = 0,
        ALIEN,
        BUZZ,
        WOODY,
    };
    Toy();
    Toy(const Toy *copy);
    Toy(ToyType type, const std::string &name, const std::string &filename);
    Toy &operator=(const Toy &copy);
    ~Toy();
    ToyType getType() const;
    const std::string &getName() const;
    void setName(const std::string &name);
    bool setAscii(const std::string &filename);
    std::string getAscii() const;
    virtual bool speak(const std::string &toSay);
    virtual bool speak_es(const std::string &toSay);
    Toy &operator<<(const std::string &picture);
    class Error {
    public:
        Error();
        enum ErrorType {
            UNKNOWN = 0,
            PICTURE,
            SPEAK
        };
        const std::string what() const;
        const std::string where() const;
        ErrorType type;
    };
    Error error;
    Error getLastError() const;
protected:
    ToyType _type;
    std::string _name;
    Picture _picture;
};

std::ostream& operator<<(std::ostream &out, const Toy &toy);

#endif //B_CPP_300_STG_3_1_CPPD13_ARTHUR_ROBINE_TOY_HPP
