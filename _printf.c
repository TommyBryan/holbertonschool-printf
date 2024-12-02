#include "main.h"

/**
 * _printf - Custom implementation of printf.
 * @format: The format string containing specifiers.
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
  va_list args;
  int i = 0, printed_chars = 0;
  int (*func)(va_list);

  if (!format)
    return (-1);

  va_start(args, format);

  while (format[i])
  {
    if (format[i] == '%')
    {
      i++;
      if (!format[i])
        return (-1);
      if (format[i] == '%')
        printed_chars += write(1, "%", 1);
      else
      {
        func = get_func(format[i]);
        if (func)
          printed_chars += func(args);
        else
          printed_chars += write(1, &format[i], 1);
      }
    }
    else
      printed_chars += write(1, &format[i], 1);

    i++;
  }

  va_end(args);
  return (printed_chars);
}
