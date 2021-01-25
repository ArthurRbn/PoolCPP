/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_EVENT_HPP
#define B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_EVENT_HPP

#include <string>

class Event {
public:
    Event();
    Event(unsigned int time, const std::string &event);
    ~Event();
    Event(const Event &other);
    Event &operator=(const Event &rhs);
    unsigned int getTime() const;
    const std::string &getEvent() const;
    void setTime(unsigned int time);
    void setEvent(const std::string &event);
private:
    unsigned int _time;
    std::string _event;
};

#endif //B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_EVENT_HPP
