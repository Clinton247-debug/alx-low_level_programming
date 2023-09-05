#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Prints result of the multiplication
 * @argc: Number of arguements
 * @argv: Array of arguements
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
