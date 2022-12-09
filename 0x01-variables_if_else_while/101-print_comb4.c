#include <stdio.h>

/**
 * main - Prints numbers between 01 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, c;

	i = 48;
	j = 49;
	k = 50;
	c = 0;
	while (i < 56)
	{
		while (j < 57)
		{
			while (k < 58)
			{
				if (c == 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(j);
				putchar(k);
				k++;
				c = 1;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');
	return (0);
}
