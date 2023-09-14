#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * add - Returns the sum of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Return the difference of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The difference a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Returns the product of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Returns the division of a by b
 * @a: The first integer
 * @b: The second integer
 * Return: The result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * mod - Returns the remainder of the division of a by b
 * @a: The first integer
 * @b: The second integer
 * Return: The remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
