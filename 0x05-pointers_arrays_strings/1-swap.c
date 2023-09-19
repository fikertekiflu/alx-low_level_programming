#include "main.h"
/**
 * swap_int - Swap the vlaues of two integers.
 * @a: Pointer to the first intger.
 * @b: Pointer to the second intger.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
