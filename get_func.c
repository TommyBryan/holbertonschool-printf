#include "main.h"

/**
 * get_func - Maps specifier to corresponding function.
 * @x: The specifier.
 *
 * Return: Pointer to the function or NULL if invalid.
 */
int (*get_func(char x))(va_list)
{
	specifier_t arr[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_d},
		{'i', print_i},
		{'u', print_u},
		{'o', print_o},
		{'x', print_x},
		{'X', print_X},
		{'p', print_p},
		{'\0', NULL}
	};
	int i = 0;

	while (arr[i].spec)
	{
		if (x == arr[i].spec)
			return (arr[i].func);
		i++;
	}
	return (NULL);
}
