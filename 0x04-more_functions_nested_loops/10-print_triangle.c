#include <Stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	for (i = 1 ; i <= size ; i++)
	{
		int space = size - i, n = i;

		while (space--)
			_putchar(' ');
		while (n--)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
