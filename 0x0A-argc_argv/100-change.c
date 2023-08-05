#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: num of argument
 * @argv: pointer to array of string contain argument values.
 *
 * Description: prints the minimum number of coins to make change
 * for an amount of money.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int coin[5] = {25, 10, 5, 2, 1}, num,  change = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", change);
		return (0);
	}
	for (i = 0 ; i < 5 ; i++)
	{
		change += (num / coin[i]);
		num %= coin[i];
	}
	printf("%d\n", change);
	return (0);
}
