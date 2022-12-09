#include <stdio.h>

/**
*main - Entry point
*Description: prints numbers from 0-9
*followed by new line
*Return: Success (0)
*/

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num++);
	}
	putchar('\n');
	return (0);
}
