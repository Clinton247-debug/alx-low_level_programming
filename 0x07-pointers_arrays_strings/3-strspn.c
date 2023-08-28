#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the string containing the character
 * Return: Number of bytes in thr initial segment of s string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 1;
	int i;

	while (*s != '\0' && found)
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			length++;
			s++;
		}
	}
	return (length);
}
