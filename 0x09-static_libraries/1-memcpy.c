#include "main.h"
/**
 * _memcpy - unction copies n bytes from memory area src to memory area dest
 * @dest: memory area "string"
 * @src: memory area "string"
 * @n: num of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
