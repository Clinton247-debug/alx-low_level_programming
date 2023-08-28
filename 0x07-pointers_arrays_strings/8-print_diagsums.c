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
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}

	printf("Sum of main diagonal: %d\n", sum_diag1);
	printf("Sum of secondary diagonal: %d\n", sum_diag2);
}
