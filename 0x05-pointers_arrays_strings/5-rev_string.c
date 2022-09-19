#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int fcte = 0;
	int i;

	while (s[fcte] != '\0')
		fcte++;

	for (i = 0; i < fcounter; i++)
	{
		fcte--;
		rev = s[i];
		s[i] = s[fcte];
		s[fcte] = rev;
	}
}
