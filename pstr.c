#include "monty.h"

/**
 * pstr -> Output the string beginning from the top of the stack.
 * @head: Top element of the stack.
 * @counter: Numeric identifier for a line within the code.
 */

void pstr(stack_t **head, unsigned int counter)
{
	stack_t *tmp = *head;

	(void)counter;
	while (tmp != NULL)
	{
		if (tmp->n <= 0 || tmp->n > 127)
			break;
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
