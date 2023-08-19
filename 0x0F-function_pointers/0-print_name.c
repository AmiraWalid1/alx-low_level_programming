#include<stdio.h>
#include "function_pointers.h"
/**
 * print_name - print name using function pointer f
 * @name: name that will print
 * @f: function pointer
 * 
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
