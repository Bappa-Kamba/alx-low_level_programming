#include "main.h"

/*
 * _isalpha - chechks for lowercase
 * @c: parameter to be checked
 *
 * Return: 1 if 'c' is lowercase
 *
 */
int _isalpha(int c)
{
	if  ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return (0);
	return (0);
}
