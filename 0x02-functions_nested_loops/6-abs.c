#include "main.h"

/**
 * _abs - returns the absolute value of a,
 * i.e if a is negative, it removes the negative sign,
 * by multiplying a by -1
 * @a: is the variable whose absolute value is to be returned.
 *
 * Return: a if a is 0 or positive, return (a * -1) if a is negative
 *
 */

int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}
