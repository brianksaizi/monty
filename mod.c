#include "monty.h"

/**
 * _mod -> Remainder after division operation.
 * @stack: LIFO (Last-In-First-Out) data structure.
 * @line_number: Sequential identifier for a code line.
*/

void _mod(stack_t **stack, unsigned int line_number)
{
	int num;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	} num = (*stack)->next->n;
	if (num == 0)
	{
		fprintf(stderr, "L%d: division by zero", line_number);
		exit(EXIT_FAILURE);
	} num = num % (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n = num;
}
