#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - pushes an element onto the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Line number executed from script file
*/

void push(stack_t **stack, unsigned int line_number)
{
    if (!stack)
    {
        fprintf(stderr, "L%u: stack not found\n", line_number);
        exit(EXIT_FAILURE);
    }
    stack_t *new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprinf(stderr, "Error: malloc failed");
        exit(EXIT_FAILURE);
    }
    if(!is_int)
    {
        fprintf(stder)
    }
}