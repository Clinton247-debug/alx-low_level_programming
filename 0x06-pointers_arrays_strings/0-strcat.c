#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: The first string
 * @src: The second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
