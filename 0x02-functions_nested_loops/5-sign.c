#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: parameter to be checked
 * Return: 1 if 'n' is positive, 0 if zro and -1 if negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar(n + '0');
		return (0);
	}
	return (0);
}
