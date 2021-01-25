/*
** EPITECH PROJECT, 2021
** castmania
** File description:
** castmania
*/

#include <stdio.h>
#include "castmania.h"

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *new_data = data;
    addition_t *add = NULL;
    division_t *div = NULL;
    integer_op_t *integer = NULL;

    if (instruction_type == ADD_OPERATION)
        exec_add(new_data->operation);
    else if (instruction_type == DIV_OPERATION)
        exec_div(new_data->operation);
    if (new_data->output_type == VERBOSE && instruction_type == ADD_OPERATION)
    {
        add = new_data->operation;
        printf("%d\n", add->add_op.res);
    }
    else if (new_data->output_type == VERBOSE &&
    instruction_type == DIV_OPERATION)
    {
        div = new_data->operation;
        integer = div->div_op;
        printf("%d\n", integer->res);
    }
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    int *i = NULL;
    float *j = NULL;

    if (instruction_type == PRINT_INT) {
        i = data;
        printf("%d\n", *i);
    } else if (instruction_type == PRINT_FLOAT) {
        j = data;
        printf("%f\n", *j);
    } else {
        exec_operation(instruction_type, data);
    }
}