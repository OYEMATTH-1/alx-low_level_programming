#include "main.h"
#include <stdio.>
/**
 * isPrintableASCII - determinesifnisaprintableASCIIchar
 * @n: integer
 * Return: 1true0false
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 * printHexes - printhexvalues
 * @b: stringtoprint
 * @start: startingpos.
 * @end: endingpos.
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + 1));
		else
			print(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * printASCII - printasciivaluesforstringb
 * @b: stringtoprint
 * @start: startingposition
 * @end: endingposition
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}
/**
 * print_buffer - printsabuffer
 * @b: string
 * @size: sizeofbuffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
