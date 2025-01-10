#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * convert_to_string - Converts an integer to a string.
 * @num: The integer to convert.
 * @buffer: The buffer to store the string.
 *
 * Return: The length of the string.
 */
int convert_to_string(int num, char *buffer)
{
	return sprintf(buffer, "%d", num);
}

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
	return str;
}
