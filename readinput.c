#include "shell.h"

/**
 * readinput - reads character string from std input
 * Return: character string on success
 */

char *readinput(void)
{
	char *buffer;
	size_t bufsize = 1024;
	ssize_t characters;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	characters = getline(&buffer, &bufsize, stdin);
	if (characters == -1) /* attempt to distinguish whether return value is
			       * result of error or EOF condition.
			       */
	{
		if (feof(stdin))
		{
			return (buffer);
		}
		else
		{
			free(buffer)
			perror("readinput");
			exit(EXIT_FAILURE);
		}
	}
	return (buffer);
}
