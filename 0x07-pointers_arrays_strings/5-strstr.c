#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string in which the substring will be located
 * @needle: Pointer to the substring that needs to be located
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *pattern = needle;

		while (*pattern != '\0' && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (NULL);
}
