#include "main.h"

/**
 * _memset - Fills memory with constant bytes
 * @s: Pointer to the memory area
 * @b: The constant byte value
 * @n: The number of bytes to be filled
 * Return: Pointer to the memory s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
