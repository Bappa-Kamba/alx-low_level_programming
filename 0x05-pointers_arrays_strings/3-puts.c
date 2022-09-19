#include "main.h"

/**
 * _puts - outputs to the stdout
 * @str: string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (*str != '\0')
		{
			_putchar(*str[i]);
		}
		else if (*str == '\0')
			break;
	}
}
