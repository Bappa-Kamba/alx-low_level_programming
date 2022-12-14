#include "main.h"

/**
* _strcat - concatenates two strings
*
* @dest: string to append to
* @src: string to  be appended
*
*Return: a pointer to the destination string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
