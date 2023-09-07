#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @max: The maximum value of the  range(inclusive)
 * @min: The minimum value of the range(inclusive)
 * Return: Pointer to the new created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int num_elements, i;

	if (min > max)
	{
		return (NULL);
	}
	num_elements = max - min + 1;
	arr = malloc(sizeof(int) * num_elements);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
