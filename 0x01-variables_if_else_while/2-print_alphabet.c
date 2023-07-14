#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main -entry piont
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(int argc, char** argv)
{
	/* your code goes there */
	int n = 0;

	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	while (n < 26)
	{
		putchar("%c", alpha[n]);
		n++;
	}
	putchar("\n");
	return (0);
}
