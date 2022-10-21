#include <stdio.h>

/**
* main - prints numbers from 1 to 100,
* Fizz instead of multiples of 3,
* Buzz instead of multiples of 5,
* and FizzBuzz instead of multiples of 3 and 5.
* Return: 0 on successful exit.
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("Buzz");
		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
