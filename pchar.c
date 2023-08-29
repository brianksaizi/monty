#include "monty.h"

/**
 * pchar -> Output the character at the stack's top.
 * @head: Top element of the stack.
 * @counter: Numeric identifier for a line within the code.
 */

void pchar(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n < 0 || (*head)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*head)->n);
}
