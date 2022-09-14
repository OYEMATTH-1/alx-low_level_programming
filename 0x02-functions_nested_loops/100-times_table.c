#include "main.h"
/**
 * print_times_table - Prints n timestable
 * @n: number of the time tables
 */
void print_times_table(int n)
{
	int i = 0, rep, j;

	if (n < 0 || n > 15)
		
		while (i <= n)
		{
			for (j = 0; j <= n; j++)
			{
				rep = 1 * j;
				if (j == 0)
					_putchar('0' + rep);
				else if (rep < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + rep);
				}
				else if (rep < 100)
				{
					_putchar(' ');
					_putchar('0' + rep / 10);
					_putchar('0' + rep % 10);
				}
				else
				{
					_putchar('0' + rep / 100);
					_putchar('0' + (rep - 100) / 10);
					_putchar('0' + rep % 10);
				}
				if (j < n)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
			i++;
		}
}
