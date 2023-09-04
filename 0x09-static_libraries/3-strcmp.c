#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: The first string
 * @s2: The second string
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
