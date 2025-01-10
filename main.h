#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* Function prototypes */
int _printf(const char *format, ...);
<<<<<<< HEAD
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
=======
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int (*get_func(char x))(va_list);
>>>>>>> kevin

#endif /* MAIN_H */

