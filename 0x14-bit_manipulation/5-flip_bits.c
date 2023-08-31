#include "main.h"
/**
 * _log2 - log2 of number
 * @n: number
 *
 * Return: log2(n)
*/
unsigned long int _log2(unsigned long int n)
{
	unsigned long int res = -1;

	while (n)
	{
		n >>= 1;
		res++;
	}
	return (res);
}
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
		nXORm >>= 1ul ;
	}
	return (cnt);

}
