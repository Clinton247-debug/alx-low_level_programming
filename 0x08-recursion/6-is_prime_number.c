#include "main.h"

int check_prime(int n, int divisor);

/**
 * is_prime_number - Returns 1 if input integer is a prime number, otherwise 0
 * @n: Input integer
 * Return: 1 if input integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_prime(n, 2));
}


/**
 * check_prime - Helper function to recursively check if a number is prime
 * @n: The number to be checked
 * @divisor: The current divisor being checked
 * Return: 1 if number is prime, 0 if it's not
 */

int check_prime(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (check_prime(n, divisor + 1));
}
