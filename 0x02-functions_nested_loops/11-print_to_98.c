#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
				putchar(',');
			printf(" %d", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
				putchar(',');
			printf(" %d", i);
		}
	}
	putchar('\n');
}
