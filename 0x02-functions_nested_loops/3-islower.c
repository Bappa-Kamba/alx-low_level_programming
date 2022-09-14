#include <stdio.h>

/*
 *
 * _islower - chechks for lowercase
 *
 * Return: 1 if 'c' is lowercase
 *
 */
int _islower(int c);
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
	
	c = _islower('A');
	putchar(c + '0');

	c = _islower('a');
	putchar(c + '0');
	putchar('\n');
	return (0);
}
int _islower(int a)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (a == c)
			return (1);
		else 
			return (0);
	}

	return (0);
}
