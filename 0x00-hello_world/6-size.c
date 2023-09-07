#include <stdio.h>

/**
 * main - this is the  main function
 *
 * Return: 0 on success
 * 
 */
int main(void) {
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
    printf("Size of float: %zu byte(s)\n", sizeof(double));
    return (0);
}
