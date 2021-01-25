/*
** EPITECH PROJECT, 2021
** delete list elements
** File description:
** delete list elements
*/

#include <stddef.h>
#include "double_list.h"

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    if (*front_ptr == NULL)
        return false;
    *front_ptr = (*front_ptr)->next;
    return true;
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    double_list_t my_list = *front_ptr;

    if (*front_ptr == NULL)
        return false;
    while (my_list->next->next) {
        my_list = my_list->next;
    }
    my_list->next = NULL;
    return true;
}

int special_delete_cases(double_list_t *front_ptr, unsigned int position)
{
    if (*front_ptr == NULL)
        return false;
    if (position == 0)
        return double_list_del_elem_at_front(front_ptr);
    else if (position == double_list_get_size(*front_ptr))
        return double_list_del_elem_at_back(front_ptr);
    if (position > double_list_get_size(*front_ptr))
        return false;
    return 10;
}

bool double_list_del_elem_at_position(double_list_t *front_ptr,
unsigned int position)
{
    double_list_t my_list = *front_ptr;
    int cases = 10;

    cases = special_delete_cases(front_ptr, position);
    if (cases != 10)
        return cases;
    for (int i = 1; my_list && i < position - 1; my_list = my_list->next, i++);
    if (my_list == NULL)
        return false;
    my_list->next = my_list->next->next;
    return true;
}