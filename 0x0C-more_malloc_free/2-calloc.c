#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements to allocate memory for
 * @size: The size(in bytes) of each element
 * Return: NULL if nmemb or size is 0, if malloc fails,
 * then _calloc return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);
}
