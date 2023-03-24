#include "main.h"
#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 */
int main(void)
{
	long b, number = 612852475143;

	for (b  = 2; b <= number; b++)
	{
		if (number % b == 0)
		{
			number = number / b;
			b--;
		}
	}
	printf("%lu\n", b);

	return (0);
}
