#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Assigns random number to the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;
	if (lastnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	}
	else if (lastnum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnum);
	}
	else if (lastnum < 6 && lastnum != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	}
	return (0);
}
