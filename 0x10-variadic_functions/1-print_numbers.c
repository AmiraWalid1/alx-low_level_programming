#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int cnt = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(nums, n);
	while (cnt--)
	{
		printf("%d%s", va_arg(nums, int), cnt ? (separator ? separator : "") : "\n");
	}
	va_end(nums);
}
