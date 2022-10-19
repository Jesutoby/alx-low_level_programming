#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from a integer n to 98,
 * can be lower or higher or equal to 98,
 * followed by a new line
 * @n: is the specified starting point.
 */

void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}			
	}
}
