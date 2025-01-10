#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Function declarations */
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);

typedef int (*func_ptr)(va_list);

/**
 * struct spec - Structure for specifying format specifiers.
 * @spec: The format specifier character (e.g., 'c' for char, 's' for string).
 * @f: Pointer to the corresponding function to handle the specifier.
 */
typedef struct spec
{
char spec;
func_ptr f;
} spec;

/* Function to get the corresponding function for a format specifier */
func_ptr get_func(char x);

/* Function to convert integer to string */
int convert_to_string(int num, char *buffer);
char *int_to_string(int num);

#endif /* MAIN_H */
