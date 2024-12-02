#include "main.h"

/**
 * print_c - Prints a single character.
 * @c: List of arguments.
 * Return: Number of characters printed (1).
 */
int print_c(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_s - Prints a string.
 * @str: List of arguments.
 * Return: Number of characters printed.
 */
int print_s(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		print_c(str[i]);

	return (i);
}

/**
 * print_percent - Prints a literal '%'.
 * Return: Number of characters printed (1).
 */
int print_percent(void)
{
	return (write(1, "%", 1));
}
