#include "main.h"

/**
 * print_numbers - Print numbers from 0 - 9, followed by new line
 */

void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
