#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 */

void print_number(int n)
{
	int divisor = 1;
	int temp = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
