#include<stdio.h>
#include<unistd.h>
#include<string.h>
/**
 * main - entry point
 *
 * Return: Always 1 (success)
 */
int main(int argc, char *argv[])
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n" ;
	write(2, message, strnlen(message,sizeof(message)));
	return (1);
}
