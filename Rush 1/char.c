/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include <stdlib.h>
#include "new.h"
#include "char.h"

typedef struct
{
    Class   base;
    char     x;
}   CharClass;

static void char_ctor(CharClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static char *char_str(CharClass *this)
{
    char *buffer = malloc(1024);

    if (buffer == NULL) {
        raise("Could not allocate string buffer.");
    }
    snprintf(buffer, 1024, "<Char (%c)>", this->x);
    return (buffer);
}

static Object *char_add(CharClass *a, CharClass *b)
{
    return (new(Char, a->x + b->x));
}

static Object *char_sub(CharClass *a, CharClass *b)
{
    return (new(Char, a->x - b->x));
}

static Object *char_mul(CharClass *a, CharClass *b)
{
    return (new(Char, a->x * b->x));
}

static Object *char_div(CharClass *a, CharClass *b)
{
    return (new(Char, a->x / b->x));
}

static bool char_eq(CharClass *a, CharClass *b)
{
    return (a->x == b->x);
}

static bool char_gt(CharClass *a, CharClass *b)
{
    return (a->x > b->x);
}

static bool char_lt(CharClass *a, CharClass *b)
{
    return (a->x < b->x);
}

static const CharClass _description = {
    {
        .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&char_ctor,
        .__dtor__ = NULL,
        .__str__ = (to_string_t)&char_str,
        .__add__ = (binary_operator_t)&char_add,
        .__sub__ = (binary_operator_t)&char_sub,
        .__mul__ = (binary_operator_t)&char_mul,
        .__div__ = (binary_operator_t)&char_div,
        .__eq__ = (binary_comparator_t)&char_eq,
        .__gt__ = (binary_comparator_t)&char_gt,
        .__lt__ = (binary_comparator_t)&char_lt
    },
    .x = 0
};

const Class *Char = (const Class *)&_description;
