#include "main.h"

/**
 * main - ENTRY POINT
 *
 * Description: Main Code
 *
 * Return: Always 0
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
}
