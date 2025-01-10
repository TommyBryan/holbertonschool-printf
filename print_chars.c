#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_c - Handles the 'c' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * print_s - Handles the 's' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (!str)
		str = "(null)";

	while (str[len])
		len++;

	return (write(1, str, len));
}

/**
 * print_percent - Handles the '%' specifier for _printf.
 * @args: Argument list (unused).
 *
 * Return: Number of characters printed.
 */
int print_percent(va_list args)
{
	(void)args; /* Unused argument */
	return (write(1, "%", 1));
}
