#include <stdio.h>

/**
  * main - prints the number of arguments passed to the program
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
		printf("%i\n", argc - 1);
	return (0);
}
