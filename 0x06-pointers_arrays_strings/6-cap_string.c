#include "main.h"
#include <stdbool>
/**
 * ISLower - check if character is lower
 * @c: character to check
 *
 * Return: true "lower" / false "otherwise"
 */
bool ISLower(char c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * ISDelimiter - check if character is delimiter
 * @c: character to check
 *
 * Return: true "is delimiter" / false "oterwise"
 */
bool ISDelimiter(char c)
{
	char delimiter[] = " \n\t,;.!?\"(){}";
	int i;

	for (i = 0 ; i < 13 ; i++)
	{
		if (delimiter[i] == c)
			return (true);
	}
	return (false);
}

/**
 * cap_string -  capitalizes all words of a string.
 * @str: string
 *
 * Return: modified string
 */
char *cap_string(char *str)
{
	int i;
	char *ptr = str;
	bool delimiter = false;

	while (*str)
	{
		if (ISDelimiter(*ptr))
		{
			delimiter = true;
		}
		else if (ISLower(*ptr) && delimiter)
		{
			*ptr -= 32;
			delimiter = false;
		}
		else if (delimiter)
		{
			delimiter = false;
		}
		str++;
	}
	return (str);
}
