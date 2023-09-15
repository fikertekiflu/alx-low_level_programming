#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int i;
	char digit;

	for (i = 0; i <= 9; i++)
	{
		digit = i + '0';
		_putchar(digit);
	}

	_putchar('\n');
}
