#include "monty.h"

/**
 * _pall -> Displays all values in the stack.
 * @stack: LIFO (Last-In-First-Out) data structure.
 * @line_number: Sequential identifier for a code line.
*/

void _pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *num;

	for (num = *stack; num != NULL; num = num->next)
		printf("%d\n", num->n);
}
