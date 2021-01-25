/*
** EPITECH PROJECT, 2021
** find
** File description:
** find
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int find_c(const string_t *this, const char *str, size_t pos)
{
    int i = 0;
    char *ptr = NULL;

    if (pos > strlen(this->str))
        return -1;
    ptr = strstr(&this->str[pos], str);
    if (ptr == NULL)
        return -1;
    for (i = 0; this->str[i] != 0; ++i)
        if (&this->str[i] == ptr)
            return i;
    return -1;
}

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    return find_c(this, str->str, pos);
}

void insert_c(string_t *this, size_t pos, const char *str)
{
    char *new_str = NULL;

    if (pos > strlen(this->str)) {
        this->append_c(this, str);
        return;
    }
    new_str = malloc(sizeof(char) * (strlen(this->str) + strlen(str) + 1));
    strncpy(new_str, this->str, pos);
    new_str[pos] = '\0';
    strcat(new_str, str);
    strcat(new_str, this->str + pos);
    free(this->str);
    this->str = new_str;
}

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    insert_c(this, pos, str->str);
}

int to_int(const string_t *this)
{
    return atoi(this->str);
}