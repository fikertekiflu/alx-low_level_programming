#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
        int n;

        srand(time(0));

        n = rand() - RAND_MAX / 2;

        printf("The number is: %d\n", n);

        if (n > 0)
        {
                printf("is positive\n");
        }
        else if (n == 0)
        {
                printf("is zero\n");
        }
        else
        {
                printf("is negative\n");
        }
                                       

      printf("\n");

      return (0);
}