#include "main.h"



int helper_sqrt(int n, int start, int end);


/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Pointer to the number
 * Return: -1 id n does not have a square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (helper_sqrt(n, 1, n));
}

/**
 * helper_sqrt - Helper fuction to find the square root
 * @n: The number for which the square root is calculated
 * @start: The starting value of the search range
 * @end: The ending value of the search range
 * Return: The square root of the number within the specified range
 */

int helper_sqrt(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}
	mid = start + (end - start) / 2;

	if (mid == n / mid && n % mid == 0)
	{
		return (mid);
	}
	else if (mid < n / mid)
	{
		return (helper_sqrt(n, mid + 1, end));
	}
	else
	{
		return (helper_sqrt(n, start, mid - 1));
	}
}