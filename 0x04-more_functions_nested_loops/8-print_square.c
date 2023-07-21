#include "main.h"

/**
 * print_square - prints # symbol square size
 * @size: this is the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = size; j > 0; j--)
			{
				putchar('#');
			}
			putchar('\n');
		}
		putchar('\n');
	}
}
