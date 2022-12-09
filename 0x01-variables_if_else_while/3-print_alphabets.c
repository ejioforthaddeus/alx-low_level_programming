#include <stdio.h>

/**
*main - Entry point
*Description: Prints all alphabets from a-zA-Z
*Return: Success (0)
*/

int main(void)
{
	char c = 'a', d = 'A';

	while (c <= 'z')
		putchar(c++);
	while (d <= 'Z')
		putchar(d++);
	putchar('\n');
	return (0);
}
