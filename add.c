#include "monty.h"

/**
 * _add -> Sum up two elements at the top of the stack
 * @stack: Stack data structure.
 * @line_number: Line's number identifier.
*/

void _add(stack_t **stack, unsigned int line_number)
{
	int num;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	} num = (*stack)->next->n;
	num += (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n = num;
}
