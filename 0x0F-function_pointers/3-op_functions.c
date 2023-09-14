#include "3-calc.h"

/**
 * add - Returns the sum of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Return the difference of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The difference a and b
 */

int subtract(int a, int b)
{
	return (a - b);
}

/**
 * mul - Returns the product of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Returns the division of a by b
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the division of a by b
 */

int divide(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * mod - Returns the remainder of the division of a by b
 * @a: The first integer
 * @b: The second integer
 * Return: The remainder of the division of a by b
 */

int mod(int a, int b)
{
	if (a == b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
