#include "main.h"

/**
 * print_line - Print a line of underscores
 * @n: The number of times the character '-' should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		_putchar('-');
		n--;
	}
	_putchar('\n');
}
