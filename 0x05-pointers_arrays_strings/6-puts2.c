#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints a string in reverse, folllowed by a new line.
 * @str: Pointer to the string to be printes in reverse.
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (i < j)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
