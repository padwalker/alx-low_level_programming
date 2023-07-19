#include "main.h"
#include<stdio.h>
/**
 * times_table - prints 9 times or multiplication table
 * 
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for ( i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j < 9)
			{
				printf("%d, ", j*i);
			}
			if (j == 9)
			{
				printf("%d ", j*i);
			}
		}
		printf("\n");
	}
	printf("\n");
}
