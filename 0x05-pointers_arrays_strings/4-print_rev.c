#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	for (i = i - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
