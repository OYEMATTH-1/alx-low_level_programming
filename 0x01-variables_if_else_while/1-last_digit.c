#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print thelast digit of a random number and state whether is greater than 5, less than 6, or 0
 *
 * Return: Always 0
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;

	if (lastnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	}
	else if (lastnum < 6 && lastnum != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnum);
	}
	return (0);
}
