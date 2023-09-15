#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @number: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number.
 */
long largest_prime_factor(long number)
{
	long largest_factor = -1;

	while (number % 2 == 0)
	{
		largest_factor = 2;
		number = number / 2;
	}

	for (long i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largest_factor = i;
			number = number / i;
		}
	}

	if (number > 2)
		largest_factor = number;

	return (largest_factor);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("Largest prime factor of %ld: %ld\n", number, result);

	return (0);
}
