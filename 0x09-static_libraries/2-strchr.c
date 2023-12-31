#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			break;
		s++;
	}
	return (NULL);
}
