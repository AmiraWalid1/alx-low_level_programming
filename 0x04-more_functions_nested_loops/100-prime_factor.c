#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	long int n = 612852475143, i = 2, largest_prime_factor;

	if (n % 2 == 0)
		largest_prime_factor = 2;
	while (n % 2 == 0)
		n /= 2;
	i++;

	while (n != 1)
	{
		if (n % i == 0)
			largest_prime_factor = i;
		while (n % i == 0)
			n /= i;
		i += 2;
	}
	printf("%ld\n", largest_prime_factor);
	return (0);
}
