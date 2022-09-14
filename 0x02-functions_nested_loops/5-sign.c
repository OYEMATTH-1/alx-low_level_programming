#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number
 * @n: the int to check
 * Return: 1p+(n>0),0p0(n=0),-1p-(n<0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
