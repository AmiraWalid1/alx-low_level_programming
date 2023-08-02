#include "main.h"
/**
 * prime - check if n is prime or not with recursion
 * @n: num to check
 * @x: integer help in check
 *
 * Return: 1 if prime / 0 otherwise
 */
int prime(int n, int x)
{
	if (n <= 1)
		return (0);
	else if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);
	return (prime(n, x + 1));
}
/**
 * is_prime_number - call prime
 * @n : num to check
 *
 * Return: 1 if prime / 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
