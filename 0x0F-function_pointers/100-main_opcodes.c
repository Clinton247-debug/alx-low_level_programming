#include <stdio.h>
#include <stdlib.h>

/**
 * main - -Entry point of the program
 * @argc: Number of arguements
 * @argv: Array of arguements
 * Return: 0 on success, 1 on incorrect arguements,
 * 2 on negative bytes
 */

int main(int argc, char *argv[])
{
	int i;
	char *main_ptr = (char *)&main;
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < num_bytes && main_ptr[i]; i++)
	{
		printf("%02hhx", main_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
