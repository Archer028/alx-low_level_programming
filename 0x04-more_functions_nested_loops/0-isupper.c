#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if a character is uppercase
 * @c: carrier variable
 * Return: 1 if c is true, 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

