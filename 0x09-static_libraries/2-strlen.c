#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: String
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("Character at index %d is: %c\n", i, s[i]);
	}

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}