#include "main.h"
#include <stdlib.h>

/**
 * print_d - Prints a signed decimal integer.
 * @args: List of arguments.
 * Return: Number of characters printed.
 */
int print_d(va_list args)
{
    int num = va_arg(args, int);
    char *str = int_to_string(num);
    int len = 0;

    if (!str)
        return (-1);

    while (str[len])
        write(1, &str[len++], 1);

    if (num != 0)
        free(str);

    return (len);
}

/**
 * print_i - Alias for print_d.
 * @args: List of arguments.
 * Return: Number of characters printed.
 */
int print_i(va_list args)
{
    return (print_d(args));
}

