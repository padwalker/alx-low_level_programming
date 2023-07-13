#include<stdio.h>
#include<unistd.h>
#include<string.h>
/**
 * main - entry point
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, message, strnlen(message, sizeof(message)));
	return (1);
}
