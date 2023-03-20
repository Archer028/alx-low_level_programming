#include <stdio.h>
/**
*main -  prints all single digit numbers
* of base 10 starting from 0, followed
* by a new line
* Return: always 0 (success)
*/
int main(void)
{
int i, y;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
