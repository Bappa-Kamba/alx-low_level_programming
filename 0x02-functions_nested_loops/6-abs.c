#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: parameter to be checked
 *
 * Return: integer
 *
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	return (n);
}
