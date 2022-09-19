#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
