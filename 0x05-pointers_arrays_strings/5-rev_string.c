#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to print
 *
 * Return: void
 */
void rev_string(char *s)
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
