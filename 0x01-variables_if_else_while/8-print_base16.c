#include <stdio.h>

/**
 * main - Prints all the numbers of base i6 in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <'g'; ch++)
	{
		putchar(ch);
	}
	putchar(ch);
	return (0);
}
