#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as an arguement to the program
 * Return: A pointer to the function that correspond to the given operator
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	exit(99);
}
