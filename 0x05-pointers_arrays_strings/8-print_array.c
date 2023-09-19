#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elemnt of the an array of the element
 * @a: The array of integer.
 * @n:The number of elemts to be printed.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
