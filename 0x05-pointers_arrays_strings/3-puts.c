#include "main.h"
#include <unistd.h>

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
			write(1, &str[i], 1);
		else if (*str == '\0')
			break;
	}
}
