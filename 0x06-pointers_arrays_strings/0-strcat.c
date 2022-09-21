#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: string to be appended
 * @dest: string to append to
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char a1[98] = "Hello ";
	char a2[] = "World!\n";
	char *ptr;

	{
		_putchar(a1);
		_putchar(a2);
		ptr = _strcat(a1, a2);
		_putchar(a1);
		_putchar(a2);
		_putchar(ptr);
	}

	return (char);
}
