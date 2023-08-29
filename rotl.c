#include "monty.h"

/**
 * rotl -> Moves the stack's elements, bringing the top element to the front.
 * @head: Top element of the stack.
 * @counter: Sequential line identifier.
 */

void rotl(stack_t **head, unsigned int counter)
{
	stack_t *tmp = *head;
	int n;

	(void)counter;
	if (*head == NULL || (*head)->next == NULL)
		return;
	n = (*head)->n;
	while (tmp->next != NULL)
	{
		tmp->n = tmp->next->n;
		tmp = tmp->next;
	}
	tmp->n = n;
}
