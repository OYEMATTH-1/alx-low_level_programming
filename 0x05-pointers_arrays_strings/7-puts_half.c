#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int i, n, length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	n = (length / 2);

	of ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
