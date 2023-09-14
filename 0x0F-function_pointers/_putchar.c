#include <unistd.h>

/**
 * _putchar - Writes a character to the stdout
 * @c: The character to be written
 * Return: On success, returns the written character as unsigned cha cast
 * On error, -1 is returned, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
