#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase then in uppercase
 * 
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	return (0);
}
