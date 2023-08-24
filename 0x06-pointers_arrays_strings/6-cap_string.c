#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: Input string
 * Return: Pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;
	bool new_word = true;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			new_word = true;
		}
		else if (str[i] >= 'a' && str[i] <= 'z' && new_word)
		{
			str[i] = str[i] - 32;
			new_word = false;
		}
		else
		{
			new_word = false;
		}
		i++;
	}
	return (str);
}
