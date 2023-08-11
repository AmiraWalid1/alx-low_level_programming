#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
 * isnum - check if str is num or not
 * @str: string to check it
 *
 * Return: 1 (true) / 0 (false)
 */
int isnum(char *str)
{
	if (*str == '-')
	{
		str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * _atoi - convert a string to an integer.
 * @str: string to convert integer
 *
 * Return: integer
 */
int _atoi(char *str)
{
	int num = 0, checkneg = 0;

	if (*str == '-')
	{
		str++;
		checkneg = 1;
	}
	while (*str)
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	if (checkneg)
	{
		return (-num);
	}
	return (num);
}
/**
 * print_number - prints an integer , can only use _putchar function to print
 * @n: num to print
 *
 * Return: void
 */
void print_number(int n)
{
	int num = n;

	if (num == 0)
	{
		return;
	}
	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}
	print_number(num / 10);
	_putchar(num % 10 + '0');
}
/**
 * main - Entry point.
 *
 * Description: multiplies two positive numbers.
 * @argc: num of argument
 * @argv: array contain value of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !isnum(argv[1]) || !isnum(argv[2]))
	{
		_puts("Error");
		exit(98);
	}
	print_number(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
