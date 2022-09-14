#include <stdio.h>

/*
 * print_alphabet - Prints alphabets in lower case
 *
 * Description: Prints all the letters of the alphabets in lower case followed
 * by a new line.
 *
 * Return: Alphabets in lowercase
 *
 */
void print_alphabet(void);

/*
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
	int i = 1;

	while (i <= 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		i++;
	}
}
