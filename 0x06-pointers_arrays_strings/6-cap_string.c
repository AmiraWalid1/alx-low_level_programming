#include "main.h"
#include <stdbool.h>
/**
 * ISLower - check if character is lower
 * @c: character to check
 *
 * Return: 1 "lower" / 0 "otherwise"
 */
int ISLower(char c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * ISDelimiter - check if character is delimiter
 * @c: character to check
 *
 * Return: 1 "is delimiter" / 0 "oterwise"
 */
int ISDelimiter(char c)
{
	char delimiter[] = " \n\t,;.!?\"(){}";
	int i;

	for (i = 0 ; i < 13 ; i++)
	{
		if (delimiter[i] == c)
			return (1);
	}
	return (0);
}

/**
 * cap_string -  capitalizes all words of a string.
 * @str: string
 *
 * Return: modified string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int delimiter = 0;

	while (*ptr)
	{
		if (ISDelimiter(*ptr))
		{
			delimiter = 1;
		}
		else if (ISLower(*ptr) && delimiter)
		{
			*ptr -= 32;
			delimiter = 0;
		}
		else
		{
			delimiter = 0;
		}
		ptr++;
	}
	return (str);
}
