#include <stdio.h>

/**
 * _puts - Prints a string to the stdout
 * @str: The string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
