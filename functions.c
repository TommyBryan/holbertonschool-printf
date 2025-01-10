#include "main.h"

/**
 * print_s - Prints a string.
 * @args: List of arguments.
 *
 * Return: Number of characters printed.
 */
int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (!str)
		return (write(1, "(null)", 6)); /* Handling NULL strings */

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}

	return (i);
}
