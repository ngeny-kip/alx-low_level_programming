#include "main.h"

/**
 * swap_int - swaps the value of two intergers.
 * @a: Interger to swap
 * @b: Interger to swap
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
