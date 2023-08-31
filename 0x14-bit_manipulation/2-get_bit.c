#include "main.h"
#include <string.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index of bit base 0
 *
 * Return: the value of a bit at a given index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n & (1 << index)) ? 1 : 0;
	return (bit);
}
