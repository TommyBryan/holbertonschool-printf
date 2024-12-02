#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Function prototypes */
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int (*get_func(char x))(va_list);

#endif /* MAIN_H */

