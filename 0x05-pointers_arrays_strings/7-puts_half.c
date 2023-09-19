#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints the second  half of a string ,followed by  new line.
 * @str: The string
 */
void puts_half(char *str)
{
	int length = 0;
	int i, n;

	while (str[length] != '\0')
	{
		length++;
	}
	n = length / 2;

	if (length % 2 != 0)
	{
		n++;
	}
	i = n;

	while (i < length)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
