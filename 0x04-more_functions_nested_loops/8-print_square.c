#include "main.h"

/**
* print_square - prints square with #,
* having same number of row(s) and column(s).
* @size: is the parameter for the size of square.
*/

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
