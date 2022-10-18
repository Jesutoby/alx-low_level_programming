#include "main.h"

/**
 * _isalpha - checks if c is a letter, lowercase or uppercase,
 * in ASCII.
 * @c: is the variable name to be checked.
 * Return: 1 if c is a letter, return 0 otherwise.
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
