#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: The character to be located in a string
 * Return: Pointer to the first occurence of character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
