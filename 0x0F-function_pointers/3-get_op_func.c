#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as an arguement to the program
 * Return: A pointer to the function that correspond to the given operator
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", add},
		{"-", subtract},
		{"*", mul},
		{"/", divide},
		{"%", mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
