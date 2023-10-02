#include "main.h"
/**
 * _strncat - Concatenates two string using at most n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the sourse string
 * @n: Maximum number of bytes to be copied from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (result);
}
