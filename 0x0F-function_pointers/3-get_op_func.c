#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - This function returns a pointer to the function
 * that corresponds to the operator given as a parameter.
 * @s: is the operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s && s[1] == '\0' && *s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
