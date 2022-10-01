#include <stdio.h>

/**
  * main - prints the program's name
  *
  * @argc: argument counter
  * @argv: argument array
  *
  * Return: name of the program @ argv[0]
*/
int main(int argc, char *argv[])
{
	if (argc != 0)
		printf("%s\n", argv[0]);
	return (0);
}
