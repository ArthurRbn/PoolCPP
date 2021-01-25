/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD09-arthur.robine
** File description:
** Exercice 0
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_EX00_H
#define B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_EX00_H

typedef struct cthulhu_s
{
    int m_power;
    char *m_name;
} cthulhu_t;

cthulhu_t *new_cthulhu();
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);

typedef struct koala_s
{
    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t;

koala_t *new_koala(char *name, char is_a_legend);
void eat(koala_t *this);

#endif //B_CPP_300_STG_3_1_CPPD09_ARTHUR_ROBINE_EX00_H