#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_d - Handles the 'd' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_d(va_list args)
{
	int num = va_arg(args, int);
	char *str = int_to_string(num);
	int len = 0;

	if (str)
	{
		while (str[len])
			len++;
		write(1, str, len);
		free(str);
	}

	return (len);
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
