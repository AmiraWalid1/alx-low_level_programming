#include "main.h"
#include <string.h>
/**
 * _log2 - log2 of x
 * @x: num
 *
 * Return: log2(x)
*/
int _log2(int x)
{
	int res = 0;

	while (x)
	{
		x /= 2;
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
	unsigned long int i = _log2(n);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i--)
	{
		_putchar((n & (1 << i)) ? '1' : '0');
	}
}
