#include <unistd.h>

/**
 * _putchar - Writes the character to c stdout
 * @c: The character to print
 * Return: 1 on success
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
