/*
** EPITECH PROJECT, 2021
** double list
** File description:
** double list
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "double_list.h"

unsigned int double_list_get_size(double_list_t list)
{
    int res = 1;
    double_list_t my_list = list->next;

    if (list == NULL)
        return 0;
    while (my_list) {
        my_list = my_list->next;
        res++;
    }
    return res;
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return true;
    else if (list)
        return false;
}

void double_list_dump(double_list_t list)
{
    double_list_t my_list = list;

    if (list == NULL)
        return;
    while (my_list) {
        printf("%f\n", my_list->value);
        my_list = my_list->next;
    }
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t new_node = malloc(sizeof(doublelist_node_t));

    if (new_node == NULL)
        return false;
    new_node->value = elem;
    new_node->next = NULL;
    if (*front_ptr == NULL) {
        *front_ptr = new_node;
        return true;
    }
    new_node->next = (*front_ptr)->next;
    new_node->value = (*front_ptr)->value;
    (*front_ptr)->value = elem;
    (*front_ptr)->next = new_node;
    return true;
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t new_node = malloc(sizeof(doublelist_node_t));
    double_list_t my_list = *front_ptr;

    if (new_node == NULL)
        return false;
    new_node->value = elem;
    new_node->next = NULL;
    if (*front_ptr == NULL) {
        *front_ptr = new_node;
        return true;
    }
    while (my_list->next) {
        my_list = my_list->next;
    }
    my_list->next = new_node;
    return true;
}