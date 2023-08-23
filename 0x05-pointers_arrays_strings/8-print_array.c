#include <stdio.h>

/**
 * print_array - Print n element of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of element to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
