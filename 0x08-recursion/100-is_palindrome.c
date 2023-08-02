#include "main.h"
#include <string.h>
/**
 * palindrome - check f a string is a palindrome
 * @s: string to check
 * @l: left of string
 * @r: rigth of string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int palindrome(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	if (s[l] != s[r])
		return (0);
	return (palindrome(s, l + 1, r - 1));
}
/**
 * is_palindrome - call palindrome function
 * @s: string to check
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome(s, 0, len - 1));
}
