#include "main.h"
#include <stdio.h>

/**
 * main - find prime number
 *
 * Decription: find largest prime munber
 * Retur: zero
 */

int main(void)
{
	long int max, lower, test;

	max = 61282475143;
	lower = 2;
	test = 2;

	while (max > test)
	{
		if (max % test == 0)
		{
			lower = test;
			max = max / lower;
			test = lower + 1;
		}
		else
			test++;
	}
	printf("%ld\n", max);
	return (0);
}
