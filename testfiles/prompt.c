#include "shell.h"

/**
 * prompt - prints a prompt string
 * Return: void
 */

void prompt(void)
{
	char *buffer; /* will store input from getline */
	size_t bufsize = 1024; /* holds the size of input buffer for getline */
	size_t characters; /* stores # of characters entered in getline */

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	write(STDOUT_FILENO, "$ ", 2);
	characters = getline(&buffer, &bufsize, stdin);
	write(STDOUT_FILENO, "$ \n", 3);
	/* write(STDOUT_FILENO, buffer, characters); */
	free(buffer);
}
