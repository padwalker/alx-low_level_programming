#include "main.h"

/**
 * print_diagonal - prints diagonal line to terminal
 * 
 * @n: size or number of print diagonal
 *
 * Return: void
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
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
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
