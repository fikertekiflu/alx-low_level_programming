#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
