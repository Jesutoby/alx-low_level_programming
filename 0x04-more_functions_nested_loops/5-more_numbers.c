#include "main.h"

/**
* more_numbers - print 1 to 14,
* followed by a new line,
* 10 times
*/

void more_numbers(void)
{
	int a, i;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
