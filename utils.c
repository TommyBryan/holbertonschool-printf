#include "main.h"
#include <stdlib.h>
/**
 * int_to_string - Converts an integer to a string.
 * @num: The integer to convert.
 *
 * Return: A pointer to the resulting string.
 */
char *int_to_string(int num)
{
	char *str;
	int temp = num, len = 0, negative = 0;

	if (num == 0)
		return ("0"); /* Handle zero case as static string */

	if (num == INT_MIN) /* Handle edge case for INT_MIN */
	{
		num++;
		negative = 1;
	}

	if (num < 0)
	{
		negative = 1;
		num = -num;
	}

	while (temp != 0)
	{
		len++;
		temp /= 10;
	}

	str = malloc(sizeof(char) * (len + negative + 1));
	if (!str)
		return (NULL); /* Return NULL if memory allocation fails */

	str[len + negative] = '\0';
	while (len > 0)
	{
		str[len + negative - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}

	if (negative)
		str[0] = '-';

	return (str);
}
