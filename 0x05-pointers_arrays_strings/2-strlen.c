#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: The string to be returned
 * Return: Length og the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
