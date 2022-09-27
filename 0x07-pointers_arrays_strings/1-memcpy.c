#include "main.h"

/**
  * _memcpy - copies memory
  *
  * @dest: where memory is to be copied to
  * @src: memory to be copied
  * @n: number of bytes  to be copied
  *
  * Return: pointer to dest vaariable
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
