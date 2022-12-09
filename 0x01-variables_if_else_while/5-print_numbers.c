#include <stdio.h>

/**
*main - Entry point
*Description: prints numbers from 0-9
*followed by new line
*Return: Success (0)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
		printf("%d", num++);
	putchar('\n');
	return (0);
}
