/*
** EPITECH PROJECT, 2021
** list get elem
** File description:
** list get elem
*/

#include <stddef.h>
#include "generic_list.h"

void *list_get_elem_at_front(list_t list)
{
    if (list == NULL)
        return 0;
    return list->value;
}

void *list_get_elem_at_back(list_t list)
{
    list_t my_list = list;

    if (list == NULL)
        return 0;
    while (my_list->next) {
        my_list = my_list->next;
    }
    return my_list->value;
}

void *list_get_elem_at_position(list_t list, unsigned int position)
{
    list_t my_list = list;

    if (list == NULL || position > list_get_size(list))
        return 0;
    for (int i = 0; my_list && i < position; my_list = my_list->next, i++);
    if (my_list == NULL)
        return false;
    return my_list->value;
}

unsigned int list_get_size(list_t list)
{
    int res = 1;
    list_t my_list = list->next;

    if (list == NULL)
        return 0;
    while (my_list) {
        my_list = my_list->next;
        res++;
    }
    return res;
}