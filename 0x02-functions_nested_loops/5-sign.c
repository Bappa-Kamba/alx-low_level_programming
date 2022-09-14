#include <stdio.h>

/*
 *
 * print_sign - prints the sign of a number
 *
 * Return: 1 if 'n' is positive, 0 if zro and -1 if negative
 *
 */
int print_sign(int n);
/*
 *
 * main - ENTRY POINT
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int c;

	c = print_sign(50);
	putchar(',');
	putchar(' ');
	putchar(c + '0');
	putchar('\n');
	c = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(c + '0');
	putchar('\n');
	c = print_sign(-8);
	putchar(',');
	putchar(' ');
	putchar(c + '0');
	putchar('\n');
	return (0);
}
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
