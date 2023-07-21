#include "main.h"

/**
 * more_numbers - it prints number 0-14 x10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	j = 0;
	for (i = 0; i <= 9; i++)
	{
		while (j <= 14)
		{
			putchar('0' + j);
			j++;
		}	
		putchar('\n');
	}
	putchar('\n');
}
