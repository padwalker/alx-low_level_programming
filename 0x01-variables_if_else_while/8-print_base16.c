#include <stdio.h>
/* more headers goes there */
/**
 * main -entry piont
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	/* your code goes there */
	int n = 0;

	while (n < 16)
	{
		if (n >= '0' && n <= '9')
		{
			putchar('0' + n);
		}
		if (n >= '10' && n < '16')
		{
			putchar(97 + n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
