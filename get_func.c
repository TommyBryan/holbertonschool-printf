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

	spec arr[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_d},
		{'i', print_i},
		{'\0', NULL}
	};

	while (arr[i].spec != '\0') /* Proper check for end of array */
	{
		if (x == arr[i].spec)
			return (arr[i].f);
		i++;
	}
	return (NULL);
}

