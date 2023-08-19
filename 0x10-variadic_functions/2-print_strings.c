#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between strings.
 * @n: is the number of strings passed to the function.
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int cnt = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(strings, n);
	while (cnt--)
	{
		printf("%s%s", va_arg(strings, char *),
		cnt ? (separator ? separator : "") : "\n");
	}
	va_end(strings);
}
