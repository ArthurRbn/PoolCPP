/*
** EPITECH PROJECT, 2021
** assign and append functions
** File description:
** assign and append functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

void assign_c(string_t *this, const char *s)
{
    int len = 0;

    if (this->str != NULL)
        free(this->str);
    for (len = 0; s && s[len]; len++);
    this->str = malloc(sizeof(char) * (len + 1));
    if (this->str == NULL)
        return;
    for (int i = 0; i < len; i++)
        this->str[i] = s[i];
    this->str[len] = '\0';
}

void assign_s(string_t *this, const string_t *str)
{
    assign_c(this, str->str);
}

void append_c(string_t *this, const char *ap)
{
    this->str = realloc(this->str, (strlen(this->str) + strlen(ap) + 1));
    strcat(this->str, ap);
}

void append_s(string_t *this, const string_t *ap)
{
    append_c(this, ap->str);
}

char at(const string_t *this, size_t pos)
{
    if (strlen(this->str) <= pos)
        return -1;
    for (size_t i = 0; this->str[i]; ++i)
        if (i == pos)
            return this->str[i];
    return -1;
}