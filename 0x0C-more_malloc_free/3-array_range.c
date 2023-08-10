#include "main.h"
/**
 * array_range - creates an array of integers.
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max.
 * @min: first element
 * @max: last element
 *
 * Return: pointer to the newly created array.
 * (NULL) If min > max or malloc fails.
 */
int *array_range(int min, int max)
{
	int *ptr, i, sz;

	if (min > max)
	{
		return (NULL);
	}
	sz = (max - min + 1);
	ptr = malloc(sizeof(int) * (sz + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < sz; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
