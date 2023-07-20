#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		int space = i - 1;

		while (space--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
