#include <stdio.h>
/**
 * main - Entry point
 * @argc: num of argument
 * @argv: array to values of arguments
 *
 * Description: print num of argument passed to it
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
