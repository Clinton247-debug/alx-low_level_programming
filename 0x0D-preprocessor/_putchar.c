#include <unistd.h>

/**
 * _putchar - Writes a character to the stdout
 * @c: The character to be written
 * Return: On success, the character is returned,
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
