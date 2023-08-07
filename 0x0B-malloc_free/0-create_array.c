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
    char* ptr = malloc(size * sizeof(char));
    unsigned int i;

    if (size == 0)
    {
        return (NULL);
    }
    for (i = 0 ; i < size ; i++)
    {
        ptr[i] = c;
    }
    return (ptr);
}
