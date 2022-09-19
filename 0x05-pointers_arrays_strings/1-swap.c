#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: parameter to swap
 * @b: parameter to swap
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
