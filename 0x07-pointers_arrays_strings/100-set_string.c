#include <stdio.h>

/**
 * set_string - Set the value of a pointer to a char
 * @s: Pointer to a pointer to a char
 * @to: Pointer to a char
 * Return: Void
 */


void set_string(char **s, char *to)
{
	*s = to;
}
