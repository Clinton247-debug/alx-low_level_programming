#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers followed by new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		print_number(num);
		if (separator != NULL && i != n - 1)
		{
			print_separator(separator);
		}
	}
	va_end(args);
	print_newline();
}


/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * print_searator - Prints a separator string
 * @separator: The string to be printed
 */

void print_separator(const char *separator)
{
	while (*separator)
	{
		_putchar(*separator);
		separator++;
	}
}

/**
 * print_newline - Prints a new line character
 */

void print_newline()
{
	_putchar('\n');
}
