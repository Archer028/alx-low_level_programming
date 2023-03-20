#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assigns a random number
* to variable n each time it is
* executed
* Return: always 0 (success)
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
{
printf("Last digit of %d is greater than 5\n", n);
}
else if (n == 0)
{
printf("Last digit of %d is 0\n", n);
}
else
{
printf("Last digit of %d is less than 6 and 0\n", n);
}
return (0);
}
