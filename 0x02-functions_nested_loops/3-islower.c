#include "main.h"

/**
 *
 * _islower - chechks for lowercase
 *
 * Return: 1 if 'c' is lowercase
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
