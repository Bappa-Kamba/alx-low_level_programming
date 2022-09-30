#include "main.h"

/**
  * _strlen_recursion - counts the number of characters in a string
  *
  * @s: string to be counted
  *
  * Return: an integer value
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
