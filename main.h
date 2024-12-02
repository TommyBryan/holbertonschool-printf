#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* Function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);

/**
 * struct ___ - structure of print function types
 * @_: 
 * @f: print function to be used
 */

/* Structure for specifiers-function mapping */

typedef struct ___
{
  char *___;
  int (*f)();
} typeofprint;

#endif /* MAIN_H */

