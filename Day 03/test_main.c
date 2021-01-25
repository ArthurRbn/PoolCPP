/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "string.h"
/*
int main(void)
{
    char *string = strdup("nirts yM");
    string_t s;

    string_init(&s, "My strin");
    printf("return = %ld et s = %s\n", s.copy(&s, string, 8, 0), string);
    string_destroy(&s);
    free(string);
    return (0);
}
*/
int main(void)
{
    string_t s;
    string_t s2;
    string_t s3;
    string_t s4;
    const string_t * const str_tab[4] = {&s, &s2, &s3};

    string_init(&s, "Hello");
    string_init(&s2, "World");
    string_init(&s3, "");
    string_init(&s4, "");

    s.join_s(&s4, ' ', str_tab);
    printf("%s\n", s4.str);

    string_destroy(&s);
    string_destroy(&s2);
    string_destroy(&s3);
    string_destroy(&s4);
    return (0);
}
/*
int main()
{
    string_t string;
    char *s = malloc(sizeof(char) * 5);

    s[0] = 'a';
    s[1] = 'a';
    s[2] = 'b';
    s[3] = 'c';
    s[4] = '\0';
    string_init(&string, "salut ");
    string.append_c(&string, "c'est florian!");
    printf("position 0 du mot '%s' = %d\n", "florian", string.find_c(&string, "florian", 5));
    printf("position 0 du mot '%s' = %d\n", "florian", string.find_c(&string, "florian", 0));
    printf("%s\n", string.str);
    printf("%c\n", string.at(&string, 3));
    printf("%d\n", string.size(&string));
    printf("compare = %d\n", string.compare_c(&string, "oui"));
    printf("%ld\n", strlen(string.str));
    printf("nombre de carac copiés : %ld\n", string.copy(&string, s, 4, 0));
    printf("%s\n", s);
    string.clear(&string);
    free(s);
    string_destroy(&string);
    return (0);
}*/