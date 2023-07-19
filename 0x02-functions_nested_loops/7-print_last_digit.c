#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: num to check
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	putchar(n + '0');
	return (n);
}