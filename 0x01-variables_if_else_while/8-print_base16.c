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
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
