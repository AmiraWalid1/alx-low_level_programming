#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - the sum of a and b
 * @a: first integer
 * @b:second integer
 *
 * Return: the sun
*/
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - the difference of a and b
 * @a: first integer
 * @b:second integer
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - the product of a and b
 * @a: first integer
 * @b:second integer
 *
 * Return: the product
*/
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - the result of the division of a by b
 * @a: first integer
 * @b:second integer
 *
 * Return: the division
*/
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod -  the remainder of the division of a by b
 * @a: first integer
 * @b:second integer
 *
 * Return:  the remainder
*/
int op_mod(int a, int b)
{
	return ((a) % (b));
}
