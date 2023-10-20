#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings,appends the src string to the dest string
 * @dest: string that will add to it string src
 * @src: string that will add to dest
 *
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest), j = 0;

	for ( ; src[j] != '\0' ; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
