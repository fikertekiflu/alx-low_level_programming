#include "main.h"

/**
 * _memset - Entry point
 * @s: Pointed destination
 * @b: Constant byte
 * @n: bytes
 * Return: Always o success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
