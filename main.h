#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* Function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(char c);
int print_s(char *s);
int print_percent(void);
typedef int (*func_ptr)();
func_ptr get_func(char x);

/**
 * struct ___ - structure of print function types
 * @_: 
 * @f: print function to be used
 */
typedef struct specifier
{
  char *spec;
  int (*f)();
} typeofprint;

#endif /* MAIN_H */

