#include "main.h"
#include "string.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string to concatenate with
 * @s2: string will concatenate
 *
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2, and null
 * terminated
 */
char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *newstr;

	if (s1 == NULL)
	{
		sz1 = 0;
	}
	else
	{
		sz1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		sz2 = 0;
	}
	else
	{
		sz2 = strlen(s2);
	}
	newstr = malloc(sz1 + sz2 + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < sz1 ; i++)
	{
		newstr[i] = s1[i];
	}
	for (i = 0 ; i < sz2 ; i++)
	{
		newstr[sz1 + i] = s2[i];
	}
	return (newstr);

}
