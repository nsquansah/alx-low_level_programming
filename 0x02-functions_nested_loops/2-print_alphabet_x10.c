# include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
	}
}
