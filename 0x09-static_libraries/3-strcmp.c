#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if two string equal / positive num if s1 greater than s2
 * negative if s1 less than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] != '\0')
		return (s1[i]);
	else if (s2[i] != '\0')
		return (-s2[i]);
	return (0);
}
