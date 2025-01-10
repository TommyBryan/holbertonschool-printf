#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_u - Handles the 'u' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_u(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	int len;

	len = sprintf(buffer, "%u", num);
	return (write(1, buffer, len));
}

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

/**
 * print_p - Handles the 'p' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_p(va_list args)
{
	void *addr = va_arg(args, void *);
	char buffer[20];
	int len;

	len = sprintf(buffer, "%p", addr);
	return (write(1, buffer, len));
}
