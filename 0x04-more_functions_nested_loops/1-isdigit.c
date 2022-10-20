#include "main.h"

/**
* _isdigit - check if c is a digit.
* @c: is the variable to be checked.
*
* Return: c if c is between 0 and 9 (included)
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
