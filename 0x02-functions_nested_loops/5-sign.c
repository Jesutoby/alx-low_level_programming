#include "main.h"

/**
 * print_sign - prints + and returns 1 if n is greater than 1,
 * prints 0 and returns 0 if n is equal to 0,
 * prints - and returns -1 if n is less tahn 0.
 * @n: is the variable to be checked.
 * Return: 1, 0, -1 as explained above.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
