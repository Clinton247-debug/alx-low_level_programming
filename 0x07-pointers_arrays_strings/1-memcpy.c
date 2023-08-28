#include "main.h"


/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination
 * @src: Pointer to the memory area
 * @n: The number of bytes to be copied
 * Return: Pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
