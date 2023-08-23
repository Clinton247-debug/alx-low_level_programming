#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Value of the swapped integers
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
