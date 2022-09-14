#include <stdio.h>

/*
 *
 * _isalpha - chechks for lowercase
 *
 * Return: 1 if 'c' is lowercase
 *
 */
int _isalpha(int c);
/*
 *
 * main - ENTRY POINT
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int c;

	c = _isalpha('A');
	putchar(c + '0');

	c = _isalpha('a');
	putchar(c + '0');
	putchar('\n');
	return (0);
}
int _isalpha(int c)
{
	if  ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return (0);
	return (0);
}
