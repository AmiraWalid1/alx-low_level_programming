#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers.
 * @a: 2D square matrix
 * @size: size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sumdiag1 = 0, sumdiag2 = 0;
	int *ptr = a;

	for (i = 0 ; i < size ; i++)
	{
		sumdiag1 += *(a);
		a += (size + 1);
	}
	printf("%d, ", sumdiag1);
	for (i = 0 ; i < size ; i++)
	{
		ptr += (size - 1);
		sumdiag2 += (*ptr);
	}
	printf("%d\n", sumdiag2);
}
