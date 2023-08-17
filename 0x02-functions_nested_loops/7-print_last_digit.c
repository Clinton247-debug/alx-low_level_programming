#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @n: Number to be treated
 * Return: Value of the last digit number
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
