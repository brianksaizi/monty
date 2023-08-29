#include "monty.h"

/**
 * check -> Validates the arguments' correctness.
 * @ac: Argument count.
 * @av: Array of arguments.
 * @file: Input source or document.
*/

void check(int ac, char *av[], FILE *file)
{
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

}
