#include "main.h"

/**
* _islower (int c) - checks if int c is a lowercase letter,
* in ASCII.
* @c is the variable name for the character.
* Return: 1 if lowercase, return 0 otherwise
* return(c >= 97 && c <= 122);
*/

int _islower(int c)
{
        if (c >= 97 && c <= 122)
                return 1;
        else
                return 0;
}
