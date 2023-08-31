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
	int i, flag = 0;

	if (n == 0)
	{
		
		return;
	}
	i = sizeof(n) * 8 - 1;
	while (i--)
	{	
		if (n & (1 << i))
		{
			_putchar('1');
		
	int i, flag = 0;

	if (n == 0)
	{
		
		return;
	}
	i = sizeof(n) * 8 - 1;
	while (i--)
	{	
		if (n & (1 << i))
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}
