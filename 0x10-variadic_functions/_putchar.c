#include <unistd.h>

/**
 * _putchar - Prints a character to the stdout
 * @c: The character to be printed
 * Return: On successs, 1 is returned, On error, -1 is returned
 * and errno is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
