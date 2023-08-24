#include "main.h"
#include <stdbool.h>

/**
 * rot13 - Encodes a string using rot13
 * @str: Input string
 * Return: Pointer to the modified string
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		bool is_alpha = (str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z');

		if (is_alpha)
		{
			char base = (str[i] >= 'a' && str[i] <= 'z') ? 'a' : 'A';

			str[i] = (str[i] - base + 13) % 26 + base;
		}
		i++;
	}
	return (str);
}
