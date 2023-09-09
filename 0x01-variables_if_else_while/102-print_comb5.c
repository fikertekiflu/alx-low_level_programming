#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			int num1_first_digit = num1 / 10;
			int num1_second_digit = num1 % 10;
			int num2_first_digit = num2 / 10;
			int num2_second_digit = num2 % 10;

			putchar(num1_first_digit + '0');
			putchar(num1_second_digit + '0');
			putchar(' ');
			putchar(num2_first_digit + '0');
			putchar(num2_second_digit + '0');

			if (num1 != 99 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
