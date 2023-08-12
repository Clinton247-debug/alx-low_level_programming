#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints alpbabets in lowercase, then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
