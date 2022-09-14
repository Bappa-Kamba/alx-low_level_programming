#include <stdio.h>

/*
 *
 * _abs - computes the absolute value of an integer
 *
 * Return: integer
 *
 */
int _abs(int n);

/*
 *
 * main -ENTRY POINT
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;

	n = _abs(-10);
	putchar(n + '0');
	putchar('\n');
	n = _abs(0);
	putchar(n);
	putchar('\n');
	n = _abs(-500);
	putchar(n);
	putchar('\n');
	return (0);
}
int _abs(int n)
{	
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	return (0);
}
