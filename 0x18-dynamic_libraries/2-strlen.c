#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string to check
 *
 * Return: length of string s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
