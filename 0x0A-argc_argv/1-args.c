#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguements
 * @argv: An array containingthe command-line arguements
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}
