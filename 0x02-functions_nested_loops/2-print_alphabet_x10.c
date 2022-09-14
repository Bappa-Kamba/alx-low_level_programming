#include "main.h"

/**
 * print_alphabet_10x - Prints alphabets in lower case 10 times
 *
 * Description: Prints all the letters of the alphabets in lower case followed
 * by a new line.
 *
 * Return: Alphabets in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
