#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: The maximum number of character to concatenate
 * Return: On Success, a pointer to the newly
 * allocated memory, otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	concatenated = malloc(len1 + n + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + n] = '\0';
	return (concatenated);
}
