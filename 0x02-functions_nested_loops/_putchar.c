#include <unistd.h>
/**
* _putchar - writes to standard output (denoted by 1),
* @c is what is written to standard output,
* Return: the byte of c (a char), which is 1
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
