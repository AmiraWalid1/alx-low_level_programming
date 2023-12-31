#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: is a pointer to the memory previously allocated.
 * @old_size: s the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: pointer to realloc memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	/*malloc failed*/
	if (newptr == NULL)
	{
		return (NULL);
	}
	/*if ptr NULL return malloc(new_size)*/
	if (ptr == NULL)
	{
		return (newptr);
	}
	/*ptr not NULL cpy old_ize*/
	for (i = 0 ; i < old_size && i < new_size; i++)
	{
		*((char *)newptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (newptr);
}
