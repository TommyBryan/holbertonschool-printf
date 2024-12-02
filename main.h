#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Structure for specifier-function mapping */
typedef struct spec
{
  char valid;
  int (*f)(va_list);
} spec;

/* Function prototypes */
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);

#endif /* MAIN_H */

