#include <stdio.h>
#include <stdlib.h>
/**
 * isnum - check if str is num or not
 * @str: string to check it
 *
 * Return: 1 (true) / 0 (false)
 */
int isnum(char const *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - Entry point.
 *
 * Description: multiplies two positive numbers.
 * @argc: num of argument
 * @argv: array contain value of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !isnum(argv[1]) || !isnum(argv[2]))
	{
		puts("Error\n");
		exit(98);
	}
	printf("%d", atoi(argv[1]) * atoi(argv[2]));
	_putchar('\n');

	return (0);
}
