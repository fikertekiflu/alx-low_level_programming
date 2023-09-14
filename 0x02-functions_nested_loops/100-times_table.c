#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: Number of times table to print
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != 0)
			{
				putchar(',');
				putchar(' ');
				if (result < 10)
					putchar(' ');
				if (result < 100)
					putchar(' ');
			}
			if (result < 10)
				putchar(result + '0');
			else if (result >= 10 && result < 100)
			{
				putchar(result / 10 + '0');
				putchar(result % 10 + '0');
			}
			else
			{
				putchar(result / 100 + '0');
				putchar((result / 10) % 10 + '0');
				putchar(result % 10 + '0');
			}
		}
		putchar('\n');
	}
}
