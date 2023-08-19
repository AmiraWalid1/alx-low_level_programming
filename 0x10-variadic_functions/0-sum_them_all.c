#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters.
 * @n: num of argument
 *
 * Return: sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(nums, n);
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
