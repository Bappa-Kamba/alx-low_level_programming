#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1:  string to be compared
  * @s2:  string to be compared
  *
  * Return: an integer, negative if less than, positive if greater than
  * or 0 if equal.
*/
int _strcmp(char *s1, char *s2)
{
	int ret_val;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}

		s1++;
		s2++;
	}
	ret_val = *(unsigned char *)s1 - *(unsigned char *)s2;
	return (ret_val);
}
