#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes
 * it with a specific char
 * @size: The size of array to create
 * @c: The character to initialize the array with
 * Return: If size is 0 or if  memory allocation fails
 * Otherwise, returns a pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc((size + 1) * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';
	return (array);
}
