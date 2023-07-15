#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	for ( ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
