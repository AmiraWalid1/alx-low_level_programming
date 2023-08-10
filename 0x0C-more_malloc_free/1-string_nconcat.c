#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string to concatenate with.
 * @s2: string to concatenate.
 * @n: num of byte of s2 to concatenate with s1.
 *
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz1 = strlen(s1), sz2, i;
	char *ptr;

	if (s2 == NULL)
	{
		sz2 = 0;
	}
	else
	{
		sz2 = strlen(s2);
	}
	if (n > sz2)
	{
		n = sz2;
	}
	ptr = malloc(sz1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < sz1 ; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0 ; i < n ; i++)
	{
		ptr[sz1 + i] = s2[i];
	}
	return (ptr);
}
