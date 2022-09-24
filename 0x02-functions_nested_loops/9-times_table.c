#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			c = (a * b);
			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((c % 10) + '0');

			for (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
