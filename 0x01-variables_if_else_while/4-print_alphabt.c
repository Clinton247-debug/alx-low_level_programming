#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
