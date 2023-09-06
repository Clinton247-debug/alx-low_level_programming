#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/**
 * is_positive_number - Checks if string is a positive number
 * @s: The sring to check
 * Return: 1 is string is a positive number, 0 otherwise
 */

int is_positive_number(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}


/**
 * main - Entry point
 * @argc: Number of arguement
 * @argv: Array of arguement
 * Return: 0 if successful, 1 if there's an error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			num = atoi(argv[i]);
			if (num >= 0)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
