#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 * in the string accept Returns a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 * @s: string to search in
 * @accept: string to search for
 *
 * Return: pointer to first oocurrence to any byte in acceot in s
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s)
	{
		int i;

		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return (NULL);
}
