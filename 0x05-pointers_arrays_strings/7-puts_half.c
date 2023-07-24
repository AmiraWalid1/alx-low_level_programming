#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int sz = 0, i;

	while (str[sz])
		sz++;
	if (sz % 2)
		i = (sz - 1) / 2;
	else
		i = sz / 2;
	for ( ; i < sz ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
