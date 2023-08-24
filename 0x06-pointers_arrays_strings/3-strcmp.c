#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The seconf string
 * Return: 0 if strings are wqual, posiitve if s1 > s2, negative if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-s2[i]);
	}
	else
	{
		return (s1[i]);
	}
}
