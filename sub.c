#include "monty.h"

/**
 * _sub -> Subtract top two stack elements.
 * @stack: LIFO (Last-In-First-Out) data structure.
 * @line_number: Numeric identifier for a line within the code.
*/

void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *num;
	int sub;

	num = *stack;
	if (num == NULL || num->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	} sub = num->next->n - num->n;
	num->next->n = sub;
	_pop(stack, line_number);
}
