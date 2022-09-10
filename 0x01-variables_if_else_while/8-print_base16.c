#include <stdio.h>

/**
 * main - Prints all the numbers of base i6 in lowercase
 * followed by a new line
 * Return: Always o (Success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}
