/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#include <iostream>
#include "EventManager.hpp"

EventManager::EventManager()
{
    _time = 0;
}

EventManager::~EventManager()
{
}

EventManager::EventManager(const EventManager &other)
{
    _time = other._time;
    _events = std::list<Event>(other._events);
}

EventManager &EventManager::operator=(const EventManager &rhs)
{
    _time = rhs._time;
    _events = std::list<Event>(rhs._events);
    return *this;
}

void EventManager::addEvent(const Event &e)
{
    if (e.getTime() < _time) {
        return;
    }
    _events.push_back(e);
    _events.sort(EventManager::sortList);
}

void EventManager::removeEventsAt(unsigned int time)
{
    auto it = _events.begin();
    while (it != _events.end()) {
        if ((*it).getTime() == time) {
            it = _events.erase(it);
        } else if ((*it).getTime() != time) {
            ++it;
        }
    }
}

void EventManager::dumpEvents() const
{
    std::list<Event>::const_iterator it;
    for (it = _events.begin(); it != _events.end(); ++it)
        std::cout << (*it).getTime() << ": " << (*it).getEvent() << std::endl;
}

void EventManager::dumpEventAt(unsigned int time) const
{
    std::list<Event>::const_iterator it;
    for (it = _events.begin(); it != _events.end(); ++it)
        if ((*it).getTime() == time) {
            std::cout << (*it).getTime() << ": " << (*it).getEvent() << std::endl;
        }
}

void EventManager::addTime(unsigned int time)
{
    std::list<Event>::iterator it = _events.begin();
    while (it != _events.end()) {
        if (_time < (*it).getTime() && (*it).getTime() <= _time + time) {
            std::cout << (*it).getEvent() << std::endl;
            it = _events.erase(it);
        } else
            ++it;
    }
    _time += time;
}

void EventManager::addEventList(const std::list<Event> &events)
{
    std::list<Event> copied(events);
    _events.merge(copied, EventManager::sortList);
    _events.sort(EventManager::sortList);

    auto it = _events.begin();
    while (it != _events.end()) {
        if ((*it).getTime() <= _time)
            it = _events.erase(it);
        else
            ++it;
    }
}

bool EventManager::sortList(Event const &comp, Event const &comp1)
{
    return (comp.getTime() < comp1.getTime());
}
