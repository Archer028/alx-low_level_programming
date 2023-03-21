#include "main.h"
/**
 *main - main entry of the program.
 * Return: Always 0 (success)
 */

void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
