#include "monty.h"

/**
 * _pint -> Displays the value located at the top of the stack.
 * @stack: LIFO (Last-In-First-Out) data structure.
 * @line_number: Sequential line identifier.
*/

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *num;

	num = *stack;
	if (num == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	} printf("%d\n", num->n);
}
