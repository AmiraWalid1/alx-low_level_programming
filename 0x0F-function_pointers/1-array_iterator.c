#include<stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array of element
 * @size: size of array
 * @action: poiter to function
 *
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size && action)
	{
		while (size--)
		{
			action(*array);
			array++;
		}
	}
}
