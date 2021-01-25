/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 05
*/

#ifndef CONTAINER_H
# define CONTAINER_H

#include "object.h"
#include "iterator.h"
#include "raise.h"
#include "list.h"

typedef struct Container_s Container;


typedef Iterator *(*iter_t)(Container *this);
typedef size_t (*len_t)(Container *this);
typedef Object *(*getitem_t)(Container *this, ...);
typedef void (*setitem_t)(Container *this, ...);

typedef void (*pop_back_t)(Object *this);
typedef void (*pop_front_t)(Object *this);
typedef void (*push_back_t)(Object *this, ...);
typedef void (*push_front_t)(Object *this, ...);
typedef void (*print_list_t)(Object *this);

struct Container_s {
    Class       base;
    len_t       __len__;
    iter_t      __begin__;
    iter_t      __end__;
    getitem_t   __getitem__;
    setitem_t   __setitem__;
    pop_back_t __popBack__;
    pop_front_t __popFront__;
    push_back_t __pushBack__;
    push_front_t __pushFront__;
    print_list_t  __printList__;
};

# define len(c)             ((Container *)c)->__len__(c)
# define begin(c)           ((Container *)c)->__begin__(c)
# define end(c)             ((Container *)c)->__end__(c)
# define getitem(c, ...)    ((Container *)c)->__getitem__(c, __VA_ARGS__)
# define setitem(c, ...)    ((Container *)c)->__setitem__(c, __VA_ARGS__)

#define popBack(c)          ((Container *)c)->__popBack__(c)
#define popFront(c)         ((Container *)c)->__popFront__(c)
#define pushBack(c, ...)      ((Container *)c)->__pushBack__(c, __VA_ARGS__)
#define pushFront(c, ...)     ((Container *)c)->__pushFront__(c, __VA_ARGS__)
#define printList(c)        ((Container *)c)->__printList__(c)

#endif
