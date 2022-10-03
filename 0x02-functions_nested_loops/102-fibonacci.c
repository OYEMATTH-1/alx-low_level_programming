#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1&2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 3;
	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", next);
		}
		else if (count < 50)
		{
			printf("%lu, ", next);
		}

		first = second;
		second = next;
		next = first + second;
		count++;
	}
	return (0);
}
