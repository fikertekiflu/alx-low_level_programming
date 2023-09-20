#include "main.h"
/**
 * _strncpy - Copies a string up to n bytes
 * @dest:Pointer to the destination string
 * @src: Pointer to the sourse string
 * @n: Maximum number of the bytes to be copied
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
