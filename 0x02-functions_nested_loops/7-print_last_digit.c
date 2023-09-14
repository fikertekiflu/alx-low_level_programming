#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n; /* Convert negative numbers to positive */

	last_digit = n % 10; /* Get the remainder when divided by 10 */

	_putchar(last_digit + '0'); /* Print the last digit */

	return (last_digit);
}
