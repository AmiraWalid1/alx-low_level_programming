#include <stdio.h>
#include "main.h"
/**
 * rec - recursion fun to print integer
 * @n: num to print
 *
 * Return: void
 */
void rec(int n)
{
	if (n == 0)
		return;
	rec(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * print_number - prints an integer , can only use _putchar function to print
 * , call rec
 * @n: num to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	rec(n);
}
