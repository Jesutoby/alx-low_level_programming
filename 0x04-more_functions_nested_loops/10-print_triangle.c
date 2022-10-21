#include "main.h"

/**
* print_triangle - print triangle-like shape with #
* @size: is the parameter to hold the size of triangle.
*/

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 1, a <= size; a++)
	{
		for (b = a; b < size; b++)
			_putchar(' ');
		for (b = 1; b <= a; b++)
			_putchar('#');
		_putchar('\n');
	}
}
