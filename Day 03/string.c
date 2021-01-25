/*
** EPITECH PROJECT, 2021
** string
** File description:
** string
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "string.h"

void string_init_2(string_t *this)
{
    this->empty = empty;
    this->find_s = find_s;
    this->find_c = find_c;
    this->insert_c = insert_c;
    this->insert_s = insert_s;
    this->to_int = to_int;
    this->split_c = split_c;
    this->split_s = split_s;
    this->print = print;
    this->join_c = join_c;
    this->join_s = join_s;
}

void string_init(string_t *this, const char *s)
{
    int len = 0;

    for (len = 0; s[len]; len++);
    this->str = malloc(sizeof(char) * (len + 1));
    if (this->str == NULL)
        return;
    for (int i = 0; i < len; i++)
        this->str[i] = s[i];
    this->str[len] = '\0';
    this->append_c = append_c;
    this->append_s = append_s;
    this->assign_c = assign_c;
    this->assign_s = assign_s;
    this->at = at;
    this->clear = clear;
    this->compare_c = compare_c;
    this->compare_s = compare_s;
    this->size = size;
    this->copy = copy;
    this->c_str = c_str;
    string_init_2(this);
}

void string_destroy(string_t *this)
{
    free(this->str);
    this->str = NULL;
}

void clear(string_t *this)
{
    free(this->str);
    this->str = strdup("");
}

int size(const string_t *this)
{
    if (this->str == NULL)
        return -1;
    return strlen(this->str);
}