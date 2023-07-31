#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring.
 * @haystack: string search in
 * @needle: string search for
 *
 * Return:a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n = strlen(haystack) - strlen(needle);

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
