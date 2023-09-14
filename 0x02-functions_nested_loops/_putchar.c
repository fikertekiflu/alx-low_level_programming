#include <unistd.h>

/**
 * _putchar - Custom function to write a character to stdout
 * @c: The character to be written
 *
 * Return: On success, returns the written character.
 * On error, returns -1 and sets errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

