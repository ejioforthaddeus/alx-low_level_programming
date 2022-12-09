#include <stdio.h>

/**
*main - Entry point
*Description: Prints all alphabets from a-z
*Return: Success (0)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
