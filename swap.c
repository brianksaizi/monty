#include "monty.h"

/**
 * _swap -> Exchange the positions of the top two stack elements.
 * @stack: LIFO (Last-In-First-Out) data structure.
 * @line_number: Numeric identifier for a line within the code.
*/

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *num;
	int _switch;

	num = *stack;
	if (num == NULL || num->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	} _switch = num->n;
	num->n = num->next->n;
	num->next->n = _switch;
}
