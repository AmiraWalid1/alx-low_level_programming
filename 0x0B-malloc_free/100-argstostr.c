#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument values
 *
 * Return: pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, k = 0, sz = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < ac ; i++)
	{
		sz += (strlen(av[i]) + 1);
		str = realloc(str, sz);
		if (str == NULL)
		{
			return (NULL);
		}
		while (*av[i])
		{
			str[k++] = *av[i];
			av[i]++;
		}
		str[k++] = '\n';
	}
	return (str);
}
