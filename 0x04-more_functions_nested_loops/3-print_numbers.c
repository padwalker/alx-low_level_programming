#include "main.h"

/**
 * print_numbers - function displays numbers 0 to 9
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
}
