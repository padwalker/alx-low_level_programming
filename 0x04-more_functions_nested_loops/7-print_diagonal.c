#include "main.h"

/**
 * print_diagonal - prints diagonal line to terminal
 * 
 * @n: size or number of print diagonal
 *
 * Return: void (success)
 */
void print_diagonal(int n)
{
	int i, j;
	
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = n; i > 0; i--)
		{
			for (j = n; j > 0; j--)
			{
				if (i == j)
				{
					putchar('\\');
				}
			}
			putchar('\n');
		}
		putchar('\n');
	}
}
