#include "main.h"

/**
  * _memset - fills bytes of memory with bytes
  *
  * @s: pointer to a location
  * @b: bytes to be filled
  * @n: number of  bytes in memory to be filled
  *
  * Return: a pointer to the memory location pointed by s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
