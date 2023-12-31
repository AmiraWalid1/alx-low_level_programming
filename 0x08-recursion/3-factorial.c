#include "main.h"
/**
 * factorial - calculate the factorial of a given number.
 * @n: num to calculate it's factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
