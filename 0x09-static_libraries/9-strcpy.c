#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The destination buffer.
 * @src: The soursw string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_start);
}
