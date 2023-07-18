/**
 * main - prints _putchar
 * Return: Always 0 (success)
 *
 */
 
int _putchar(char c);
void print_alphabet(void);

void print_alphabet()
{
	char *ch = "abcdefghijklmnopqrstuvwxyz\n";
	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
}
