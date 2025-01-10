#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_o - Handles the 'o' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_o(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	int len;

	len = sprintf(buffer, "%o", num);
	return (write(1, buffer, len));
}

/**
 * print_x - Handles the 'x' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_x(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	int len;

	len = sprintf(buffer, "%x", num);
	return (write(1, buffer, len));
}

/**
 * print_X - Handles the 'X' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_X(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	int len;

	len = sprintf(buffer, "%X", num);
	return (write(1, buffer, len));
}
