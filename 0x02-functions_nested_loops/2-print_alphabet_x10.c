#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * q: counter
 * ch: alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int q;
	char ch;

	for (q = 0 ; q <= 10 ; q++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
