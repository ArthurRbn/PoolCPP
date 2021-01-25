/*
** EPITECH PROJECT, 2021
** list del elem
** File description:
** list del elem
*/

#include <stddef.h>
#include <stdbool.h>
#include "generic_list.h"

typedef struct list_t list_t;
void list_clear(list_t *front)
{
    if (*front != NULL)
        *front = NULL;
}

bool list_del_elem_at_front(list_t *front_ptr)
{
    if (*front_ptr == NULL)
        return false;
    *front_ptr = (*front_ptr)->next;
    return true;
}

bool list_del_elem_at_back(list_t *front_ptr)
{
    list_t my_list = *front_ptr;

    if (*front_ptr == NULL)
        return false;
    while (my_list->next->next) {
        my_list = my_list->next;
    }
    my_list->next = NULL;
    return true;
}

int special_list_delete_cases(list_t *front_ptr, unsigned int position)
{
    if (*front_ptr == NULL)
        return false;
    if (position == 0)
        return list_del_elem_at_front(front_ptr);
    else if (position == list_get_size(*front_ptr))
        return list_del_elem_at_back(front_ptr);
    if (position > list_get_size(*front_ptr))
        return false;
    return 10;
}

bool list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    list_t my_list = *front_ptr;
    int cases = 10;

    cases = special_list_delete_cases(front_ptr, position);
    if (cases != 10)
        return cases;
    for (int i = 1; my_list && i < position - 1; my_list = my_list->next, i++);
    if (my_list == NULL)
        return false;
    my_list->next = my_list->next->next;
    return true;
}