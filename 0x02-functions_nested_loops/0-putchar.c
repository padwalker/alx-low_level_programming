#include<stdio.h>
#include "main.h"

/**
 * main - prints _putchar
 * Return: Always 0 (success)
 *
 */
 
 int main(void)
 {
	int i = 0;
 	char x[] = "_putchar\n";

	for(i = 0; i <= 8; i++)
	{
		_putchar(x[i]);
	}
	return 0;
 }
