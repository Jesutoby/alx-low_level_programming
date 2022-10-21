#include "main.h"

/**
* print_diagonal - prints \ diagonally,
* followed by a new line.
* @n: is the parameter for the number of times to print.
*/

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
			if (b < a)
				_putchar(' ');
			else if (b == a)
				_putchar('\\');
		}
		_putchar('\n');
	}
}
