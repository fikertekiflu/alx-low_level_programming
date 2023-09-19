#include "main.h"

/**
 * _strlen - Returns the length of the string.
 *  @s: Pointer to the dting.
 *
 *  Return: The lenth of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
