/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPD16_arthur_robine
** File description:
** Created by arthur,
*/

#ifndef B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_EVENTMANAGER_HPP
#define B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_EVENTMANAGER_HPP

#include <list>
#include "Event.hpp"

class EventManager {
public:
    EventManager();
    ~EventManager();
    EventManager(EventManager const &other);
    EventManager &operator=(EventManager const &rhs);
    void addEvent(const Event &e);
    void removeEventsAt(unsigned int time);
    void dumpEvents() const;
    void dumpEventAt(unsigned int time) const;
    void addTime(unsigned int time);
    void addEventList(const std::list<Event> &events);
    static bool sortList(Event const &comp, Event const &comp1);
private:
    std::list<Event> _events;
    unsigned int _time;
};

#endif //B_CPP_300_STG_3_1_CPPD16_ARTHUR_ROBINE_EVENTMANAGER_HPP
