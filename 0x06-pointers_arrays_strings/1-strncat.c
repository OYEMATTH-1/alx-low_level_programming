#include "main.h"

/**
 * _strncat - concatenates specified values from src to dest
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of value to concatenate
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
