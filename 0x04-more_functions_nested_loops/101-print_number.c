#include <stdio.h>
#include "main.h"
/**
 * print_number - prints an integer , can only use _putchar function to print
 * @n: num to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsinged int num = n;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	if (num / 10 > 0)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
