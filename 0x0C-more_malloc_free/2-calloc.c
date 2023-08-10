#include "main.h"
/**
 * _calloc - function allocates memory for an array of nmemb elements of size
 * bytes each and returns a pointer to the allocated memory.
 * @nmemb: num of element in array
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory.
 * (NULL) If nmemb or size is 0 or malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb * size ; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
