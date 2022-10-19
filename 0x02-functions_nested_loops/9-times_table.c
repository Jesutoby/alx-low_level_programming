
#include "main.h"

/**
 * times_table - prints 9 times table starting from 0 * 0
 * to 9 * 9
 */

void times_table(void)
{
	int m, n, p;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			p = m * n;
			if (n == 0)
				_putchar(p + '0');

			if (p < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n')
	}
}
