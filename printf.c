#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: Format string containing the characters and specifiers.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
    int i = 0, count = 0;
    va_list args;
    int (*func)(va_list);

    if (!format)
        return (-1);

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (!format[i])
                return (-1);

            func = get_func(format[i]);
            if (func)
                count += func(args);
            else
                count += write(1, &format[i], 1);
        }
        else
        {
            count += write(1, &format[i], 1);
        }
        i++;
    }

    va_end(args);
    return (count);
}

