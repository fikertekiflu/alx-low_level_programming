#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";

	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		j = 0;

		while (leet_chars[j] != '\0')
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
