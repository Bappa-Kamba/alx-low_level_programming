#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds integers passed as arguments
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc != 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (0);
			}
			else 
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%i\n", sum);
	}
	return (0);
}
