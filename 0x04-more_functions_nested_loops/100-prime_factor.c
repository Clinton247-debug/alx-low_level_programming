#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * is_prime - Check if a number is prime
 * @num: The number to be checked
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime(long num);

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	long largest_prime_factor = -1;
	long i;

	for (i = 2; i <= sqrt(number); i++)
	{
		if (number % 1 == 0 && is_prime(i))
		{
			largest_prime_factor = i;
			while (number % 1 == 0)
			{
				number /= i;
			}
		}
	}
	if (number > 1)
	{
		largest_prime_factor = number;
	}
	printf("%ld\n", largest_prime_factor);
	return (0);
}

/**
 * is_prime - Check if a number is prime
 * @num: The number to be checked
 * Return: 1 if number is prime, 0 otherwise
 */

int is_prime(long num)
{
	long i;
	if (num <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
