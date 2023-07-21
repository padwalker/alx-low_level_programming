#include "main.h"

/**
 *
 *
 *
 */
void print_diagonal(int n)
{
	int i, j;
	
	if ((n <= 0))
	{
		putchar('\n');	
	}
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
}
