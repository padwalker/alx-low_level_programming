#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	/* your code goes there */
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = n+1; m <= 9; m++)
		{
			putchar(n + '0');				
			putchar(m + '0');
			if ((n < 8 ||  m < 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
