#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array to search
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare values
 * Return: Index of the first element for which cmp doesn't
 * return 0, or -1 no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
