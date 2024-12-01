#include "main.h"

/**
 * get_func - Maps specifier to corresponding function.
 * @x: The specifier.
 * 
 * Return: Pointer to the function or NULL if invalid.
 */
int (*get_func(char x))(va_list)
{
    int i = 0;
    spec arr[] = {
        {'c', print_c},
        {'s', print_s},
        {'%', print_percent},
        {'\0', NULL}
    };

    while (arr[i].valid)
    {
        if (x == arr[i].valid)
            return (arr[i].f);
        i++;
    }
    return (NULL);
}

