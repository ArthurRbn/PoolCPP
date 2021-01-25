/*
** EPITECH PROJECT, 2021
** string compare
** File description:
** string comapre
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int compare_c(const string_t *this, const char *str)
{
    if (this->str == NULL && str == NULL)
        return 0;
    if (this->str != NULL && str == NULL)
        return 1;
    if (this->str == NULL && str != NULL)
        return -1;
    return strcmp(this->str, str);
}

int compare_s(const string_t *this, const string_t *str)
{
    return compare_c(this, str->str);
}

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t copied = 0;

    if (s == NULL) {
        return 0;
    }
    for (copied = 0; copied < n; copied++) {
        s[copied] = this->str[pos + copied];
        if (s[copied] == '\0')
            return copied + 1;
    }
    return copied;
}

const char *c_str(const string_t *this)
{
    if (this == NULL)
        return NULL;
    else
        return this->str;
}

int empty(const string_t *this)
{
    if (this == NULL)
        return 1;
    if (this->str == NULL || strlen(this->str) == 0)
        return 1;
    else
        return 0;
}