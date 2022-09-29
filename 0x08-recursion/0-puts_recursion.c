#include "main.h"

/**
  * _puts_recursion - prints a string and a new line
  *
  * @s: string to be printed
  *
  * Return: nothing
*/
void _puts_recursion(char *s)
{
	while (*s  != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
