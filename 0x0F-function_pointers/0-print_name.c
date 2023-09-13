#include <stdio.h>
#include "function_pointers.h"
#include <unistd.h>


/**
 * print_name - Function that prints a name
 * @name: The name to be printed
 * @f: A function pointer that takes a char as an arguement
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
		write(1, "\n", 1);
	}
}
