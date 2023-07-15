#include<stdio.h>
/*
 * main - Entry point
 * Description: print alphabet in lowercase by only two putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	for ( ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
