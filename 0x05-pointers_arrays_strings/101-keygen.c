#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function to  valid password for  101-crackme.
 * Return: 0 Always.
 */
int main(void)
{
	int my_rand = 0, ch = 0;
	time_t my_time;

	srand((unsigned int) time(&my_time));
	while (ch < 2772)
	{
		my_rand = rand() % 128;
		if ((ch + my_rand) > 2772)
			break;
		ch += my_rand;
		printf("%c", my_rand);
	}
	printf("%c\n", (2772 - ch));
	return (0);
}
