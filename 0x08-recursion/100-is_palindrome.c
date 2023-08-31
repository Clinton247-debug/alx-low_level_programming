#include "main.h"


int check_palindrome(char *s, int start, int end);
int _strlen_recursive(char *s, int length);

/**
 * _strlen - Calculate the length of a string
 * @s: The input string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	return (_strlen_recursive(s, 0));
}



/**
 * _strlen_recursive - Calculate the length of the string using recursion
 * @s: The input string
 * @length: The current length of the string
 * Return: The length of the string
 */

int _strlen_recursive(char *s, int length)
{
	if (*s == '\0')
	{
		return (length);
	}
	return (_strlen_recursive(s + 1, length + 1));
}


/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, 0, length - 1));
}


/**
 * check_palindrome - Helper function
 * @s: The input string to be checked
 * @start: The starting index for comparison
 * @end: The ending index for comparison
 * Return: 1 if the string is a palindrome and 0 if it's not
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}
