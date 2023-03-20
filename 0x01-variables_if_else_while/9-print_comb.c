#include <stdio.h>
/**
*main -  main entry of the program
* Return: always 0 (success)
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
