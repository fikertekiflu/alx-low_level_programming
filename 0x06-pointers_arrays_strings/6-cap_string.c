#include "main.h"
#include <ctype.h>
/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i, capitalize_next;

	capitalize_next = 1;

	i = 0;
	while (str[i] != '\0')
	{
		if (capitalize_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else if (is_separator(str[i]))
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}
/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	int i = 0;

	while (separators[i] != '\0')
	{
		if (c == separators[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
