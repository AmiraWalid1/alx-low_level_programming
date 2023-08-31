#include "main.h"

/**
 * flip_bits - count the number of bits you would need to flip to get
 * from one number to another.
 * @n: first num
 * @m: second num
 *
 * Return: the number of bits you would need to flip to get
 * from one number to another.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nXORm = n ^ m;
	unsigned int cnt = 0;

	while (nXORm)
	{
		if (nXORm & (1ul))
		{
			cnt++;
		}
		nXORm >>= 1ul;
	}
	return (cnt);

}
