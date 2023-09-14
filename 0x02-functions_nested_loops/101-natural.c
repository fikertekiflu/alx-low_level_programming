#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;

	for (int i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	char digits[10];
	int num = sum;
	int index = 0;

	if (num == 0)
	{
		putchar('0');
	}
	else
	{
		while (num > 0)
		{
			digits[index] = num % 10 + '0';
			num /= 10;
			index++;
		}

		for (int i = index - 1; i >= 0; i--)
		{
			putchar(digits[i]);
		}
	}

	putchar('\n');

	return (0);
}
