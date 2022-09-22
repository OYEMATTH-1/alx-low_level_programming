#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: string to be appended
 * @dest: string to append to
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = src[j];

	return (dest);
}
