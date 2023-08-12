#include <stdio.h>

/**
 * main - Prints numbers of base16 in lowercase
 * Return: Always 0 (success0
 */

int main(void)
{
	char hex_digit;

	for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
	{
		putchar(hex_digit);
	}
	for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
	{
		putchar(hex_digit);
	}
	putchar('\n');
	return (0);
}
