#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_b - Handles the 'b' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_b(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[33];
	int i, len;

	if (num == 0)
		return (write(1, "0", 1));

	for (i = 0; num > 0; i++)
	{
		buffer[i] = (num % 2) + '0';
		num /= 2;
	}
	buffer[i] = '\0';

	for (len = 0; len < i / 2; len++)
	{
		char temp = buffer[len];
		buffer[len] = buffer[i - len - 1];
		buffer[i - len - 1] = temp;
	}

	return (write(1, buffer, i));
}

/**
 * print_S - Handles the 'S' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_S(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;
	int i;
	char hex[3];

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			len += write(1, "\\x", 2);
			sprintf(hex, "%02X", str[i]);
			len += write(1, hex, 2);
		}
		else
		{
			len += write(1, &str[i], 1);
		}
	}
	return (len);
}

/**
 * print_r - Handles the 'r' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_r(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;
	int i;

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
		len++;

	for (i = len - 1; i >= 0; i--)
		write(1, &str[i], 1);

	return (len);
}

/**
 * print_R - Handles the 'R' specifier for _printf.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */
int print_R(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;
	int i;

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			write(1, &"NOPQRSTUVWXYZABCDEFGHIJKLM"[str[i] - 'a'], 1);
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			write(1, &"nopqrstuvwxyzabcdefghijklm"[str[i] - 'A'], 1);
		else
			write(1, &str[i], 1);
		len++;
	}
	return (len);
}
