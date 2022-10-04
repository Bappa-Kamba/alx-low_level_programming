#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
  * is_num - tests for a number
  * @argvv: an argv item
  * Return: true only iif string is a number
*/
bool is_num(char *argvv)
{
	int j = 0;

	for (; argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}
	return (1);
}

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
			if (!(is_num(argv[i])))
			{
				printf("Error\n");
				return (1);
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
