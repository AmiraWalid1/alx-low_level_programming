#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string.
 * @dest: string to copy first in char in src string in it
 * @src: string to copy
 * @n: num of byte to copy
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' && dest[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
