#include <stdlib.h>
#include <string.h>
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

	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	while (n < 26)
	{
		putchar(alpha[n]);
		n++;
	}
	putchar("\n");
	return (0);
}
