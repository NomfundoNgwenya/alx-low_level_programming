#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
		s++;

	if (*s == ' ')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{

		if (result > (INT_MAX / 10) ||
			(result == (INT_MAX / 10) && (*s - '0') > (INT_MAX % 10)))
	{
		if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MIN);
	}

	result = result * 10 + (*s - '0');
	s++;

	}

	return (result * sign);
}
