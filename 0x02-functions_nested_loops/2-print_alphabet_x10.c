#include "main.h"

/** print_alphabet_x10 - function to print a to z using ASCII,
 * 10 times.
 * Return: 0 from _putchar()
 */

void print_alphabet_x10(void)
{
	char x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 97; y < 123; y++)
			_putchar(y);
		_putchar('\n');
	}
}
