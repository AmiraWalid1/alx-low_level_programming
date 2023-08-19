#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @list: pointer
 *
 * Return:void
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - print int
 * @list: pointer
 *
 * Return:void
*/
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print float
 * @list: pointer
 *
 * Return:void
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - print string
 * @list: pointer
 *
 * Return:void
*/
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	printf("%s", str ? str : "(nil)");
}

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function.
 *
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list list;
	printer p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	int i = 0, j, start = 0;

	va_start(list, format);
	while (*(format + i))
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == *p[j].symbol)
			{
				if (start)
				{
					printf(", ");
				}
				start = 1;
				p[j].print(list);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
