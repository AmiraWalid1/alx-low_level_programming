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
 * main - Entry point
 * @argc: num of argument
 * @argv: array to values of arguments
 *
 * Description: adds positive numbers.
 *
 * Return: Always 0 (Success)/ 1 (Error)
 */
int main(int argc, char const *argv[])
{
	int sum = 0, i;

	for (i = 1 ; i < argc ; i++)
	{
		if (!isnum(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
