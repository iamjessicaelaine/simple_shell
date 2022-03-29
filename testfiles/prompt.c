#include "shell.h"

/**
 * prompt - prints a prompt string
 * Return: void
 */

void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
