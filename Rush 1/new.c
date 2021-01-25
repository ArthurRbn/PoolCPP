/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush1-axel.biehler
** File description:
** new
*/

#include "new.h"
#include "raise.h"
#include <stdarg.h>

Object *new(const Class *class, ...)
{
    va_list args;
    Object *obj;

    va_start(args, class);
    obj = va_new(class, &args);
    va_end(args);
    return (obj);
}

Object *va_new(const Class *class, va_list *ap)
{
    Object *obj = malloc(class->__size__);

    if (obj == NULL) {
        raise("Could not allocate object.");
    }
    memcpy(obj, class, class->__size__);
    if (class->__ctor__ != NULL) {
        class->__ctor__(obj, ap);
    }
    return (obj);
}

void delete(Object *ptr)
{
    Class *class = ptr;

    if (class->__dtor__ != NULL) {
        class->__dtor__(ptr);
    }
    free(ptr);
}