#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: pointer to string
 *
 * Return: string in uppercase
 */
char *string_toupper(char *c)
{
	char *ptr = c;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (c);
}
