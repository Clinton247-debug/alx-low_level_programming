#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguement
 * @argv: The array of arguement
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	
	if (operation == NULL)
	{
		exit(99);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
