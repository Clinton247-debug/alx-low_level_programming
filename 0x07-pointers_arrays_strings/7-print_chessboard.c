#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard
 * @a: pointer to the 2D array of characters
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			printf("%c", a[row][col]);
		}
		printf("\n");
	}
}
