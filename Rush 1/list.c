/*
** EPITECH PROJECT, 2021
** cpp_rush1
** File description:
** Exercice 06
*/


#include <stdlib.h>
#include <stdarg.h>
#include "raise.h"
#include "list.h"
#include "container.h"
#include "new.h"
#include "int.h"
#include "char.h"

typedef struct ListClass_s ListClass;

typedef struct ListIterator_s
{
    Class       base;
    next_t      __next__;
    getvalue_t    __getvalue__;
    setvalue_t    __setvalue__;
} ListIterator;

struct ListNodeClass_s
{
    struct ListIterator_s base;
    Object            *__obj;
    ListNodeClass     *__next;
    Class             *_type;
};

typedef struct ListClass_s
{
    Container              base;
    Class                  *_type;
    ListNodeClass        *_list;
};

static void     ListNode_ctor(ListNodeClass *this, va_list *args)
{
    this->__obj = va_arg(*args, Object *);
    this->__next = va_arg(*args, Object *);
    this->_type = va_arg(*args, Class *);
}

static void     ListNode_incr(ListNodeClass *this)
{
    this->__obj = this->__next->__obj;
    this->__next = this->__next->__next;
}

static Object   *ListNode_getval(ListNodeClass *this)
{
    return (this->__obj);
}

static void     ListNode_setval(ListNodeClass *this, ...)
{
    Object *new_obj = NULL;
    va_list args;

    va_start(args, this);
    new_obj = va_new(this->_type, &args);
    va_end(args);
    delete(this->__obj);
    this->__obj = new_obj;
    return;
}

static const ListNodeClass   ListIteratorDescr = {
    {   /* Iterator struct */
        {   /* Class struct */
            .__size__ = sizeof(ListNodeClass),
            .__name__ = "ListNode",
            .__ctor__ = (ctor_t)&ListNode_ctor,
            .__dtor__ = NULL,
            .__str__ = NULL,
            .__add__ = NULL,
            .__sub__ = NULL,
            .__mul__ = NULL,
            .__div__ = NULL,
            .__eq__ = NULL,
            .__gt__ = NULL,
            .__lt__ = NULL,
        },
        .__next__ = (next_t)&ListNode_incr,
        .__getvalue__ = (getvalue_t)&ListNode_getval,
        .__setvalue__ = (setvalue_t)&ListNode_setval,
    },
    .__obj= NULL,
    .__next = NULL,
    ._type = NULL
};

static const Class    *ListNode = (const Class *)&ListIteratorDescr;

static void     List_ctor(ListClass *this, va_list *args)
{
    this->_list = NULL;
    this->_type = va_arg(*args, Class *);
}

static void     List_dtor(ListClass *this)
{
    ListNodeClass *it = this->_list;
    ListNodeClass *tmp;

    while (it != NULL) {
        tmp = it->__next;
        delete(it->__obj);
        delete(it);
        it = tmp;
    }
}

static size_t   List_len(ListClass *this)
{
    ListNodeClass *tmp = this->_list;
    int len = 0;

    for (; tmp; tmp = tmp->__next, len++);
    return len;
}

static ListNodeClass *List_begin(ListClass *this)
{
    return(this->_list);
}

static ListNodeClass *List_end(ListClass *this)
{
    ListNodeClass *tmp = this->_list;

    while (tmp->__next)
        tmp = tmp->__next;
    return tmp;
}

static Object   *List_getitem(ListClass *this, ...)
{
    va_list args;
    size_t pos;
    ListNodeClass *tmp = this->_list;

    va_start(args, this);
    pos = va_arg(args, size_t);
    va_end(args);
    for (int i = 0; i < pos && tmp; tmp = tmp->__next, ++i);
    return tmp;
}

static void     List_setitem(ListClass *this, ...)
{
    Object *new_obj = NULL;
    va_list args;
    size_t pos;
    ListNodeClass *new_node = NULL;
    ListNodeClass *tmp = NULL;
    Class *class = NULL;

    va_start(args, this);
    pos = va_arg(args, size_t);
    new_obj = va_new(this->_type, &args);
    va_end(args);
    tmp = List_getitem(this, pos - 1);
    if (this->_list == NULL) {
        new_node = new(ListNode, new_obj, NULL, this->_type);
        this->_list = new_node;
    } else if (tmp == NULL) {
        raise("position out of range");
    } else if (tmp != NULL) {
        new_node = new(ListNode, new_obj, tmp->__next, this->_type);
        tmp->__next = new_node;
    }
}

static void     pop_end(ListClass *this)
{
    ListNodeClass *my_list = this->_list;

    if (this->_list == NULL)
        return;
    while (my_list->__next->__next) {
        my_list = my_list->__next;
    }
    delete(my_list->__next);
    my_list->__next = NULL;
}

static void     pop_first(ListClass *this)
{
    ListNodeClass *tmp = NULL;

    if (this->_list == NULL)
        return;
    tmp = this->_list;
    this->_list = this->_list->__next;
    delete(tmp);
}

static void     push_end(ListClass *this, ...)
{
    Object *new_obj = NULL;
    ListNodeClass *new_node = NULL;
    ListNodeClass *my_list = this->_list;
    va_list args;

    va_start(args, this);
    new_obj = va_new(this->_type, &args);
    va_end(args);
    new_node = new(ListNode, new_obj, NULL, this->_type);
    if (this->_list == NULL) {
        this->_list = new_node;
        return;
    }
    while (my_list->__next) {
        my_list = my_list->__next;
    }
    my_list->__next = new_node;
}

static void     push_first(ListClass *this, ...)
{
    Object *new_obj = NULL;
    ListNodeClass *new_node = NULL;
    va_list args;

    va_start(args, this);
    new_obj = va_new(this->_type, &args);
    va_end(args);
    new_node = new(ListNode, new_obj, NULL, this->_type);
    if (this->_list == NULL) {
        this->_list = new_node;
    }
    new_node->__next = this->_list;
    this->_list = new_node;
}

static void     list_print(ListClass *this)
{
    ListNodeClass *tmp = this->_list;

    if (tmp == NULL)
        return;
    printf("%s\n", str(ListNode_getval(tmp)));
    while (tmp->__next != NULL)
    {
        tmp = tmp->__next;
        printf("%s\n", str(ListNode_getval(tmp)));
    }
}

static const ListClass   _descr = {
    {   /* Container struct */
        {   /* Class struct */
            .__size__ = sizeof(ListClass),
            .__name__ = "List",
            .__ctor__ = (ctor_t)&List_ctor,
            .__dtor__ = (dtor_t)&List_dtor,
            .__str__ = NULL,
            .__add__ = NULL,
            .__sub__ = NULL,
            .__mul__ = NULL,
            .__div__ = NULL,
            .__eq__ = NULL,
            .__gt__ = NULL,
            .__lt__ = NULL,
        },
        .__len__ = (len_t)&List_len,
        .__begin__ = (iter_t)&List_begin,
        .__end__ = (iter_t)&List_end,
        .__getitem__ = (getitem_t)&List_getitem,
        .__setitem__ = (setitem_t)&List_setitem,
        .__popBack__ = (pop_back_t)&pop_end,
        .__popFront__ = (pop_front_t)&pop_first,
        .__pushBack__ = (push_back_t)&push_end,
        .__pushFront__ = (push_front_t)&push_first,
        .__printList__ = (print_list_t)&list_print,
    },
    ._type = NULL,
    ._list = NULL
};

const Class   *List = (const Class *)&_descr;