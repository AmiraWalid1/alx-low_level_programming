#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: num of argument
 * @argv: array to values of arguments
 *
 * Description: multiplies two numbers.
 *
 * Return: Always 0 (Success)/ 1 (Error)
 */
int main(int argc, char const *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
