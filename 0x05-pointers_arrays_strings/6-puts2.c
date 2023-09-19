#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints a string in reverse, folllowed by a new line.
 * @str: Pointer to the string to be printes in reverse.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
