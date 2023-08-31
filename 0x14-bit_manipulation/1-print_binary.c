#include "main.h"
#include <string.h>

/**
 * _log2 - log2 of number
 * @n: number
 *
 * Return: log2(n)
*/
unsigned long int _log2(unsigned long int n)
{
	unsigned long int res = -1;

	while (n)
	{
		n >>= 1;
		res++;
	}
	return (res);
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 *
 * Return: void.
*/
void print_binary(unsigned long int n)
{
	unsigned long int i = _log2(n) + 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i--)
	{
		if (n & (1l << i))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
