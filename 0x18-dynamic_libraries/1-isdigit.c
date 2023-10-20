#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character to check
 *
 * Return: 1 True / 0 false
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
