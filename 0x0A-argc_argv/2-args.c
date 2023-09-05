#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of arguement
 * @argv: Array of arguement
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
