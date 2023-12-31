#include<stdio.h>
#include "function_pointers.h"
/**
 * int_index - returns the index of the first element for which
 * the cmp function does not return 0.
 * @array: array of element
 * @size: size of array
 * @cmp: function pointer to compare function.
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
