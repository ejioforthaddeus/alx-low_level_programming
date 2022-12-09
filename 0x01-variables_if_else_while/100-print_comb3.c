#include <stdio.h>

/**
 * main - Prints numbers between 01 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, c;

	i = 48;
	e = 49;
	c = 0;
	while (e < 58)
	{
		if (c == 1)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
		putchar(e++);
		c = 1;
		if (e == 58)
		{
			i++;
			e = i + 1;
			if (i == 58)
			{
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
