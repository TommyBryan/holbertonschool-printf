#include "main.h"

/**
 * get_func - Maps specifier to corresponding function.
 * @x: The specifier.
 * 
 * Return: Pointer to the function or NULL if invalid.
 */

func_ptr get_func(char x)
{
	int i = 0;

	typeofprint arr[] = {
		{"c", (func_ptr)print_c},
		{"s", (func_ptr)print_s},
		{"%", (func_ptr)print_percent},
		{NULL, NULL}
	};

	while (arr[i].spec != NULL)
	{
		if (x == *arr[i].spec)
			return (*arr[i].f);
		i++;
	}
	return (NULL);
}

