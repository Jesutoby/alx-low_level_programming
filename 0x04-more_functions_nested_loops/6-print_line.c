#include "main.h"

/**
* print_line - prints _ n times,
* followed by a new line.
* @n: parameter for the number of times to print _
*/

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
		_putchar('_');
	_putchar('\n');
}
