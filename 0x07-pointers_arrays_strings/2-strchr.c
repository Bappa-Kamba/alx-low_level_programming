#include "main.h"
#include <stddef.h>

/**
  *_strchr - searches for the first occurrence of the char in a string
  *
  * @s: string to be searched
  * @c: character to be serched for
  *
  * Return: a pointer to the firsst occurrence of the character c in the string
  * s or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
