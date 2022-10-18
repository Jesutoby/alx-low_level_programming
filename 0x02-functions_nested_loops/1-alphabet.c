#include "main.h"

/**
 * print_alphabet - function prints lowercase alphabets,
 * followed by new line.
 * Return: 0 from _putchar()
 */

void print_alphabet(void)
{
	char c;
	for(c = 97; c <= 122; c++)
		_putchar(c);
	_putchar('\n');
}
