/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#include "Event.hpp"

Event::Event()
{
    _time = 0;
    _event = std::string("");
}

Event::Event(unsigned int time, const std::string &event): _time(time), _event(event)
{
}

Event::~Event()
{
}

Event::Event(const Event &other)
{
    _time = other.getTime();
    _event = other.getEvent();
}

Event &Event::operator=(const Event &rhs)
{
    _time = rhs.getTime();
    _event = rhs.getEvent();
    return *this;
}

unsigned int Event::getTime() const
{
    return _time;
}

const std::string &Event::getEvent() const
{
    return _event;
}

void Event::setTime(unsigned int time)
{
    _time = time;
}

void Event::setEvent(const std::string &event)
{
    _event = event;
}
