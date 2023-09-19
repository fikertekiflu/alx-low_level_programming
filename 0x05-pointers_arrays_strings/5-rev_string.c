#include "main.h"
#include <stdio.h>
/**
 * rev_string - Prints a string in reverse, folllowed by a new line.
 * @s: Pointer to the string to be printes in reverse.
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char tmp;

	while (s[i++])
		length++;

	i = length - 1;

	while (i >= length / 2)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
		i--;
	}
}
