#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: string "memory area"
 * @b: character which fill memory with
 * @n: num of byte to fill
 *
 * Return: string "memory" after modified
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
