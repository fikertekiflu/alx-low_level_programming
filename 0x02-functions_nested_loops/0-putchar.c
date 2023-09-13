#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char str[] = "_putchar\n";
	size_t len = sizeof(str) - 1;

	write(1, str, len);

	return (0);
}
