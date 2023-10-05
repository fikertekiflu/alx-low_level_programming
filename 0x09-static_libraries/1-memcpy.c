#include "main.h"

/**
 * _memset - Entry point
 * @src: Pointed destination
 * @n: Constant byte
 * @dest: bytes
 * Return: Always o success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = n;
	return (dest);
}
