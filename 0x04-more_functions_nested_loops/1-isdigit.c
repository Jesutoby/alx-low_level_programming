#include "main.h"

/**
* _isdigit - check if c is a digit.
* @c: is the variable to be checked.
*
* Return: c if c is between 0 and 9 (included)
*/

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
