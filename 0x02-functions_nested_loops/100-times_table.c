#include "main.h"
#include<stdio.h>
/**
 * print_times_table - prints times or multiplication table
 *
 * @n: accepts integer arguments
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	if ((n < 15) && (n > 0))
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j < n)
				{
					printf("%d, ", j * i);
				}
				if (j == n)
				{
					printf("%d", j * i);
				}
			}
			printf("\n");
		}
	}
	if (n == 0)
	{
		printf("%d", n);
	}
	printf("\n");
}
