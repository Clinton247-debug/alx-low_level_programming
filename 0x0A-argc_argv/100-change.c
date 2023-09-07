#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * min_coins - Calculate the minimum number of coins
 * @cents: The amount of money in cents
 * Return: The minimum number of coins
 */


int min_coins(int cents)
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;

	if (cents < 0)
	{
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	return (count);
}


/**
 * main - Entry point
 * @argc: Number of arguement
 * @argv: Array of arguement
 * Return: 0 if successful, 1 if there's an error
 */

int main(int argc, char *argv[])
{
	int cents;
	int num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = min_coins(cents);
	printf("%d\n", num_coins);
	return (0);
}

