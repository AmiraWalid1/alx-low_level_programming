#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: parameter to check
 *
 * Return: 1 True / 0 False
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
