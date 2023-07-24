#include <stdio.h>
#include "main.h"
/**
 * print_array -  prints n elements of an array of integers
 * @n: he number of elements of the array to be printed
 * @a: arry to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n && a[i] != '\0' ; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1 || a[i + 1] == '\0')
			continue;
		printf(", ");
	}
	printf("\n");
}
