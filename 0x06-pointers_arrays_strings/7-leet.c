#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: pointer to string
 *
 * Return: pointer to string after encoded
 */
char *leet(char *str)
{
	char key[] = {'a', 'e', 'o', 't', 'l'};
	int val[] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; key[j] != '\0' ; j++)
		{
			if (str[i] == key[j] || str[i] == key[j] - 32)
				str[i] = val[j] + '0';
		}
	}
	return (str);
}
