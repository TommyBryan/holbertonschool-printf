#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct specifier - Struct to map format specifiers to functions.
 * @specifier: The format specifier character.
 * @func: The function pointer to handle the specifier.
 */
typedef struct specifier
{
char *specifier;
int (*func)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int get_func(const char *s, va_list args);

#endif /* MAIN_H */

