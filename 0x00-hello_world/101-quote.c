#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 1 (success)
 */
void write(int filedes, const char *buf, unsigned int nbyte); 
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
