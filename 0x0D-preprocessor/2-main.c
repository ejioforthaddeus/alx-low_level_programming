#include <stdio.h>
#include <stdlib.h>

/**
*main - Function that prints the name of the files it was compile from
*Return: Always success (0)
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
