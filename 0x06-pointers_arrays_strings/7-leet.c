#include "main.h"
#include <stdbool.h>

/**
 * leet - Encodes a string into 1337
 * @str: Input string
 * Return: Pointer to the modified string
 */

char *leet(char *str)
{
	int i = 0;
	char *letters = "AEOTL";
	char *leet_chars = "43071";

	while (str[i] != '\0')
	{
		int j = 0;
		bool is_letter = false;

		while (letters[j] != '\0')
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
			{
				str[i] = leet_chars[j];
				is_letter = true;
				break;
			}
			j++;
		}
		if (!is_letter)
		{
			i++;
		}
	}
	return (str);
}
