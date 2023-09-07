#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: The size of the originally allocated memory block in bytes
 * @new_size: The new size for the memory block after allocation
 * Return: On success, new_size > 0 and pointer to the newly allocated
 * memory block
 * If new_size is 0, ptr is not NULL
 * If ptr is NULL, a new memory block of size new_size is allocated
 * and a pointer to it is returned
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	min_size = (old_size < new_size) ? old_size : new_size;
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, min_size);
	free(ptr);
	return (new_ptr);
}
