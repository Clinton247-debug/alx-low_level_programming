#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Memory where is stored
 * @src: Memory where is copied
 * @n: Number of bytes
 * Return: Copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
