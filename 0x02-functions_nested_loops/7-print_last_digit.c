#include "main.h"

/**
 * print_last_digit - returns the last digit of a number,
 * by getting the remainder on division by 10.
 * @x: is the number whose last digit is to be returned.
 *
 * Return: the last digit e.g x = 203 , it returns 3
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
		x = -x;

	y = x % 10;

	if (y < 0)
		y = -y;

	_putchar(y + '0');
	return (y);
}
