#include "main.h"


int wildcmp(char *s1, char *s2);

/**
 * wildcmp - Compare two strings with wildcard characters
 * @s1: The first string
 * @s2: The second string with wildcard character '*'
 * Return: 1 if string can be considered identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s2++;
		}
		return (0);
	}
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
