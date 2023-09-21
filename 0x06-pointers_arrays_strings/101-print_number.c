#include "main.h"
/**
 * rot13 - Encodes a string using ROT13
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
	int i = 0;
	char *lowercase = "abcdefghijklmnopqrstuvwxyz";
	char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (str[i] != '\0')
	{
		int j = 0;

		while (j < 26)
		{
			if (str[i] == lowercase[j])
			{
				str[i] = lowercase[(j + 13) % 26];
				break;
			}
			else if (str[i] == uppercase[j])
			{
				str[i] = uppercase[(j + 13) % 26];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
