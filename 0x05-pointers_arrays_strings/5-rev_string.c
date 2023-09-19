#include "main.h"
#include <stdio.h>
/**
 * rev_string - Prints a string in reverse, folllowed by a new line.
 * @s: Pointer to the string to be printes in reverse.
 */
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	i = length - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
