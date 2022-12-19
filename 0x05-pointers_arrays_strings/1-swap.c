#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps two numbers
* @a: first number
* @b: second number
* Return: void
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
