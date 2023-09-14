#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
    if (n <= 98) {
        int i;
        for (i = n; i <= 98; i++) {
            if (i != n)
                putchar(',');
            putchar(' ');
            if (i < 0) {
                putchar('-');
                i *= -1;
            }
            if (i / 10 > 0)
                putchar((i / 10) + '0');
            putchar((i % 10) + '0');
        }
    } else {
        int i;
        for (i = n; i >= 98; i--) {
            if (i != n)
                putchar(',');
            putchar(' ');
            if (i < 0) {
                putchar('-');
                i *= -1;
            }
            if (i / 10 > 0)
                putchar((i / 10) + '0');
            putchar((i % 10) + '0');
        }
    }
    putchar('\n');
}
