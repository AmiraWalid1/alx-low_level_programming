#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 * using the  Binary search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located
 * or -1 if value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, idx;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx < right; idx++)
		{
			printf("%d, ", array[idx]);
		}
		printf("%d\n", array[idx]);
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}

	}
	return (-1);
}
