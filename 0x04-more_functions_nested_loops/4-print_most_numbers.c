#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if ((i != 2) && (i != 4))
		{
			putchar('0' + i);
		}
		i++;
	}
	putchar('\n');
}
