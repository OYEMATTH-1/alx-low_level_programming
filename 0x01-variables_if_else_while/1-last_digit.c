#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of a random number and state whether it is greater than 5, less than 6, or 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n, lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastnum > 5)
{
	printf("last digit of %d is %d and is greater than 5\n", n, lastnum);
}
	else if (lastnum == 0)
{
	printf("last digit of %d is %d and is 0\n", n, lastnum);
}
	else if (lastnum < 6 && lastnum != 0)
{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastnum)
}
	return (0);
}
