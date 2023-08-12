#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
