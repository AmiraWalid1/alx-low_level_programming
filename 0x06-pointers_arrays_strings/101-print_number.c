#include "main.h"
#include <stdbool.h>
/**
 * print_number - prints an integer.
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	int num = 0, zeroes = 0;
	bool check = true;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n)
	{
		if (n % 10 == 0 && check)
			zeroes++;
		else
			check = false;
		num = num * 10 + (n % 10);
		n /= 10;
	}
	while (num)
	{
		_putchar((num % 10) + '0');
		num /= 10;
	}
	while (zeroes--)
		_putchar('0');
}
