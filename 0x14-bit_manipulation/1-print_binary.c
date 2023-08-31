#include "main.h"
#include <string.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 *
 * Return: void.
*/
void print_binary(unsigned long int n)
{
	int binary_num[32], i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n)
	{
		binary_num[i] = (n % 2);
		n /= 2;
		i++;
	}
	for (i = i - 1 ; i >= 0 ; i--)
	{
		_putchar(binary_num[i] + '0');
	}
}
