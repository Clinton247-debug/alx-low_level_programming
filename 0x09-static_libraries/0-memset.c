#include "main.h"

/**
 * _memset - Fill memory with specific value
 * @s: Pointer to the memory to be filled
 * @b: The desired  value
 * @n: The number of bytes to be changed
 * Return: Changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
