#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints alphabets in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
