#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
