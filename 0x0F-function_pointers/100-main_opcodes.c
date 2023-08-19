#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always 0
*/
int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int num_byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_byte = atoi(argv[1]);
	if (num_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (num_byte--)
	{
		printf("%02hhx%s", *ptr++, num_byte ? " " : "\n");
	}


	return (0);
}
