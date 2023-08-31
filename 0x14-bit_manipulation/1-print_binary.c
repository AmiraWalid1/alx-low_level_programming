#include "main.h"
#include <string.h>

/**
 * _log2 - log2 of number
 * @n: number
 *
 * Return: log2(n)
*/
int _log2(int n)
{
	int res = 0;

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
	int i = _log2(n);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i--)
	{
		if (n & (1 << i))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
