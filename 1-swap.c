#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: variable a
 * @b: variable b
 * Return: Always 0 (sucess)
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
