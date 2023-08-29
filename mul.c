#include "monty.h"

/**
 * _mul -> Multiplies the two top stack elements.
 * @stack: LIFO (Last-In-First-Out) data structure.
 * @line_number: Numeric identifier for a line within the code.
*/

void _mul(stack_t **stack, unsigned int line_number)
{
	int num;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	} num = (*stack)->next->n;
	num *= (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n = num;
}
