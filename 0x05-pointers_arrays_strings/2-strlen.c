#include "main.h"

/**
 * _strlen - returns the leength of the string
 * @s: parameter to be checked
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}

	return (n);
