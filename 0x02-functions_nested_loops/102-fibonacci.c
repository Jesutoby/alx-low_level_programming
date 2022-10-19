#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers,
 * starting from 1, 2
 * Return: 0 on successful exit.
 */

int main(void)
{
	int i;
	long int first, second, next, sum;

	first = 1;
	second = 2;

	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
			printf("%ld, ", first);
		else
			printf("%ld\n", first);

		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
