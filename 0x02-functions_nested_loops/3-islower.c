#include "main.h"

/**
 *
 * _islower - chechks for lowercase
 *
 * Return: 1 if 'c' is lowercase
 *
 */
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
