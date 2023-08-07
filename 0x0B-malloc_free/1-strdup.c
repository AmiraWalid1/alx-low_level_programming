#include "main.h"
#include <string.h>
/**
 * _strdup - unction returns a pointer to a new string which is a duplicate of
 * the string str. Memory for the new string is obtained with malloc, and can
 * be freed with free.
 * @str: string will be duplicate
 *
 * Return: a pointer to the duplicated string. It returns NULL
 * if insufficient memory was available
 */
char *_strdup(char *str)
{
	int sz = strlen(str), i;
	char *newstr = malloc(sz);

	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < sz ; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
