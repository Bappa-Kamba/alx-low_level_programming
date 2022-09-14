#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -(n % 10);

	_putchar('0' + n);

	return (n % 10);
}
