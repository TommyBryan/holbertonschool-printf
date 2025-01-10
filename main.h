#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifier - Struct for format specifiers and their functions.
 * @spec: The format specifier.
 * @func: The function pointer to handle the specifier.
 */
typedef struct specifier
{
char spec;
int (*func)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);

#endif /* MAIN_H */
