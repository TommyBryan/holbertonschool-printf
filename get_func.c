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

<<<<<<< HEAD
	typeofprint arr[] = {
		{"c", (func_ptr)print_c},
		{"s", (func_ptr)print_s},
		{"%", (func_ptr)print_percent},
		{NULL, NULL}
=======
	spec arr[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{"d", print_d},
		{"i", print_i},
		{'\0', NULL}
>>>>>>> kevin
	};

	while (arr[i].spec != NULL)
	{
		if (x == *arr[i].spec)
			return (*arr[i].f);
		i++;
	}
	return (NULL);
}

