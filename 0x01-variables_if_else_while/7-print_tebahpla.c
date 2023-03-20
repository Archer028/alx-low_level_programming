#include <stdio.h>
/**
*main -  prints all single digit numbers
* of base 10 starting from 0, followed
* by a new line
* Return: always 0 (success)
*/
int main(void)
{
char a;
for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
