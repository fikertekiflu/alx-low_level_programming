#include "main.h"
/**
 * _strcmp - Compares two integers
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Sn integer less than ,equal to, or grateer than zero
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
