#include "main.h"
/**
 * _strcat - Concatenates two string using at most n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the sourse string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
