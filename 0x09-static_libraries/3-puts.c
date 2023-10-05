#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        putchar(s[i]);
        i++;
    }
    putchar('\n');
}
