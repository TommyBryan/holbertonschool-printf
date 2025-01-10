#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_to_string - Converts an integer to a string.
 * @num: The integer to convert.
 *
 * Return: Pointer to the string.
 */
char *int_to_string(int num)
{
	char *str = malloc(12); /* Allocate enough space for an integer string */

	if (str)
	{
		sprintf(str, "%d", num);
	}
	return (str);
}
