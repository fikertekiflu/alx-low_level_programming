#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 89; i++)
	{
		if (i / 10 < i % 10)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
