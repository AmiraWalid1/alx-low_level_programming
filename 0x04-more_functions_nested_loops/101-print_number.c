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
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n / 10 > 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
