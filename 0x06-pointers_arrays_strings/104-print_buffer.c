#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to the buffer
 * @size: Size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int o, j, i;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		i = 0;

		while (i < 10)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf(" ");
			if (i % 2)
				printf(" ");
			i++;
		}
		i = 0;

		while (i < j)
		{
			int c = *(b + o + i);

			if  (c < 32 || c > 132)
				c = '.';
			printf("%c", c);
			i++;
		}
		printf("\n");
		o += 10;
	}
}



