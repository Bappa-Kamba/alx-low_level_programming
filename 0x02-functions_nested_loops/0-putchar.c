#include "main.h"

/*
 * main - ENTRY POINT
 *
 * Return: Always 0
 */
int main(void)
{
	char *string = "_putchar";

	int i;

	for (i = 0; i < 9; i++)
	{
		char c = string[i];

		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
