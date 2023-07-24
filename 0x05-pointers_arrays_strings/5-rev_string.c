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
	int sz = 0, i, j;

	while (s[sz])
		sz++;
	for (i = 0 , j = sz - 1; i <= sz / 2  ; i++, j--)
	{
		int temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
