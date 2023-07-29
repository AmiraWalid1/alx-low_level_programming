#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @str: pointer to string
 *
 * Return: string after encoded
 */
char *rot13(char *str)
{
	char *ptr = str;
	char key[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char val[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*str)
	{
		for (i = 0 ; key[i] != '\0' ; i++)
		{
			if (*str == key[i])
			{
				*str = val[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
