#include "main.h"
/**
 * print_s - Prints a string.
 * @str: List of arguments.
 *
 * Return: Number of characters printed.
 */
int print_s(char *str)
{
	int i;

	if (!str)
		return (write(1, "(null)", 6)); /* Handling NULL strings */

	for (i = 0; str[i] != '\0'; i++)
		print_c(str[i]);

	return (i);
}

