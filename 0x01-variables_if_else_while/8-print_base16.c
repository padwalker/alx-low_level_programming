#include <stdio.h>
/* more headers goes there */
/**
 * main - printing base 16 numbers
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	/* your code goes there */
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
