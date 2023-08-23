#include <limits.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to be  converted
 * Return: Converted string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int digit;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
	}
	if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
	{
		if (sign == 1)
		{
			return (INT_MAX);
		}
		else
		{
			return (INT_MIN);
		}
	}
	result = result * digit;
	i++;
	return (result * sign);
}
