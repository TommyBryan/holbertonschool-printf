#include "main.h"

/**
 * print_c - Prints a single character.
 * @args: List of arguments.
 *
 * Return: Number of characters printed (1).
 */
int print_c(va_list args)
{
	char c = va_arg(args, int); /* Get the character */

	return (write(1, &c, 1));
}

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
		str = "(null)";

	for (i = 0; str[i]; i++)
		write(1, &str[i], 1);

	return (i);
}

/**
 * print_percent - Prints a literal '%'.
 * @args: Unused argument.
 *
 * Return: Number of characters printed (1).
 */
int print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
