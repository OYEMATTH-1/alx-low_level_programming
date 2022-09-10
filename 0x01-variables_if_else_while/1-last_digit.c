#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - states if greater than 5, less than 6, or 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	ld n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (ld > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ld)
	}
	else if (ld < 6 && ld != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	else
	{
		printf("last digit of %d is %d andis 0\n", n, ld);
	}
		return (0);
}
