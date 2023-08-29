#include "monty.h"

/**
 * _pop -> Deletes the top element from the stack.
 * @stack: LIFO (Last-In-First-Out) data structure.
 * @line_number: Sequential line identifier.
*/

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	} tmp = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
