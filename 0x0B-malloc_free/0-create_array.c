#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of array
 * @c: initialization of array
 *
 * Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
