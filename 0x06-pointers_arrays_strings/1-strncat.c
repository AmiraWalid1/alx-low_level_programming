#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings,appends the src to dest
 * @dest: string that will add to it string src
 * @src: string that will add to dest
 * @n: num of byte of string src to concat with string dest
 *
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest), j = 0;

	for ( ; src[j] != '\0' && j < n ; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
