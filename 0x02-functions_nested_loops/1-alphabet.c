#include "main.h"
/**
 * print_alphabet - prints alpahbet letters
 * c: characters counter
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
