#include "monty.h"

/**
 * free_stack -> Deallocates the stack's memory.
 * @head: Top element of the stack.
*/

void free_stack(stack_t *head)
{
	stack_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
