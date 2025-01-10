#include "main.h"
#include <unistd.h>
#include <stdarg.h>

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

/**
 * print_d - Handles the 'd' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_d(va_list args)
{
	int num = va_arg(args, int);
	char buffer[12];
	int len;

	len = convert_to_string(num, buffer); /* Helper function to convert integer */
	return (write(1, buffer, len));
}

/**
 * print_i - Handles the 'i' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_i(va_list args)
{
	return (print_d(args)); /* 'i' is the same as 'd' in functionality */
}
