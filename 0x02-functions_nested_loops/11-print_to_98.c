#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start num
 *
 * Return: void
 */
void print_to_98(int n)
{
	for ( ; n < 98 ; n++)
	{
		printf("%d, ", n);
	}
	printf("98\n");
}
