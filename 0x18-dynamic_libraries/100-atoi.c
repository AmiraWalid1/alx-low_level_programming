#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to convert integer
 *
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	int i, assign = 1;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			assign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
		}
		else if (res != 0)
		{
			break;
		}
	}
	return (res * assign);
}
