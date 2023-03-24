#include "main.h"
/**
 * print_line - prints n number of lines straight in the terminal
 *
 *@n: stores value of input shown
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
if (n <= 0)
{
break;
}
_putchar('_');
}
_putchar('\n');
}
