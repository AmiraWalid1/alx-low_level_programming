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
	int len = _strlen(s), i;

	for (i = len - 1 ; i >= 0 ; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
