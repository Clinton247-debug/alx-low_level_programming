#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as parameters
 * @array: Pointer to the array
 * @size: The size of the array
 * @action: Pointer to the functon to be executed on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}