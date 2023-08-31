#include "main.h"
#include <string.h>

/**
 * _pow - calculate power
 * @base: base
 * @power: power
 *
 * Return: base power power.
*/
int _pow(int base, int power)
{
	int res = 1;

	while (power--)
	{
		res *= base;
	}
	return (res);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	long int sz;
	unsigned int res = 0, i;

	if (b == NULL)
	{
		return (0);
	}
	sz = strlen(b);
	i = sz - 1;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			res += (*b - '0') * _pow(2, i);
			i--;
		}
		b++;
	}
	return (res);
}
