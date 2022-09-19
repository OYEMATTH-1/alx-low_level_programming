#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new line
 * @s: string input
 * Return: string in reverse manner
 */
void print_rev(char *s)
{
	int fcte = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcte++;
	}

	for (n = (fcte - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
