/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14A-arthur.robine
** File description:
** Created by arthur,
*/

#include "Errors.hpp"

NasaError::NasaError(const std::string &message, const std::string &component): _message(message), _component(component)
{
}

const std::string &NasaError::getComponent() const
{
    return _component;
}

const char *NasaError::what() const throw()
{
    return _message.c_str();
}

MissionCriticalError::MissionCriticalError(const std::string &message, const std::string &component): NasaError(message, component)
{
}

LifeCriticalError::LifeCriticalError(const std::string &message, const std::string &component): NasaError(message, component)
{
}

UserError::UserError(const std::string &message, const std::string &component): NasaError(message, component)
{
}

CommunicationError::CommunicationError(const std::string &message): NasaError(message, "CommunicationDevice")
{
}