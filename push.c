#include "monty.h"

/**
 * is_num -> Verifies whether a string represents a numeric value.
 * @str: Sequence of characters.
 * Return: Conditional dependency.
*/

int is_num(char *str)
{
	int i = 0;

	str = strtok(str, " \n");
	if (str[0] == '-')
		i++;
	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
	} return (0);
}

/**
 * _push -> Adds an element onto the stack.
 * @stack: LIFO (Last-In-First-Out) data structure.
 * @line_number: Numeric identifier for a line within the code.
*/

void _push(stack_t **stack, unsigned int line_number)
{
	int num;
	char *arg;
	stack_t *new = malloc(sizeof(stack_t));

	arg = strtok(NULL, " ");
	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	} num = atoi(arg);
	if (is_num(arg) == -1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	} new->n = num;
	new->prev = NULL;
	new->next = *stack;
	*stack = new;
}
