#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
