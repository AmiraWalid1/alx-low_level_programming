#include "main.h"
/**
 * square - function to chaeck if num have natural square root with recursion
 * @n: num to check
 * @val: value check with it
 *
 * Return: natural square root of a n / -1 If n does not have
 * a natural square root
 */
int square(int n, int val)
{
	if (val * val > n)
		return (-1);
	else if (val * val == n)
		return (val);
	return (square(n, val + 1));
}
/**
 * _sqrt_recursion - call sqare function
 * @n: num which will calculate square root
 *
 * Return: natural square root of a n / -1 If n does not have
 * a natural square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
