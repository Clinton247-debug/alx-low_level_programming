#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals
 * of a square matrix of integers
 * @a: Pointer to the square matrix
 * @size: The size of the square matrix
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum2 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
