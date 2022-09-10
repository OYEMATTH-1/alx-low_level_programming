#include <stdio.h>

/**
 * main - Prints all single digit numbers f base 10 starting from 0
 * followed by a new line
 * Return: Always o (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	putchar("\n");
	return (0);
}
