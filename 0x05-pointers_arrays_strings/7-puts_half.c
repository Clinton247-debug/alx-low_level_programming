#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int start_index;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1 / 2);
	}
	while (str[start_index] != '\0')
	{
		putchar(str[start_index]);
		start_index++;
	}
	putchar('\n');
}
