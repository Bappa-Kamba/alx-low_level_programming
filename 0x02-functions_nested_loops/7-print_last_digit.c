#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar('0' + (n % 10));
	if (n < 0 && n == INT_MIN)
		n = -(n % 10);
	_putchar(n + '0');

	return (n % 10);
}
