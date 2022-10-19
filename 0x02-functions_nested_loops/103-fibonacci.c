#include <stdio.h>

/**
 * main - sum up the fibonacci sequence who value
 * do not exceed 4000000
 * Return: 0 on success
 */
int main(void)
{
	int i;
	long int first, second, next, sum;

	first = 1;
	second = 2;
	sum = 0;

	for (i = 1; i <= 50; i++)
	{
		if ((first < 4000000) && ((i % 2) == 0))
		{
			sum += first;
			next = first + second;
			first = second;
			second = next;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
