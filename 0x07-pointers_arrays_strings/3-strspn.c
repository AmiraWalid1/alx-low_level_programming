#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to search in
 * @accept: string to search for
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s)
	{
		int i;

		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (accept[i] == *s)
				break;
		}
		if (accept[i] == '\0')
			break;
		len++;
		s++;
	}
	return (len);
}
