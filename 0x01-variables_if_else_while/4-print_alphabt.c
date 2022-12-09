#include <stdio.h>

/**
*main - Entry point
*Description: Prints all alphabets from a-z
*except q and e with new line after each alphbet
*Return: Success (0)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
			continue;
		}
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
