/*
** EPITECH PROJECT, 2021
** cpp_rush1
** File description:
** Exercice 06
*/

#ifndef LIST_H_
#define LIST_H_

#include "object.h"

typedef struct ListNodeClass_s ListNodeClass;

typedef void (*next_t)(ListNodeClass *this);
typedef Object *(*getvalue_t)(ListNodeClass *this);
typedef void (*setvalue_t)(ListNodeClass *this, ...);

#define next(it)           ((ListNodeClass *)it)->__next__(it)
#define getvalue(it)         ((ListNodeClass *)it)->__getvalue__(it)
#define setvalue(it, ...)    ((ListNodeClass *)it)->__setvalue__(it, __VA_ARGS__)

extern const Class  *List;

#endif /* !LIST_H_ */