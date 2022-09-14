#include <main.h>

/*
 * main - ENTRY POINT
 *
 * Return: Always 0
 */
int main(void)
{
	char *string = "_putchar";
	
	for (int i = 0; i < 9; i++)
	{
		_putchar(string[i]);
	}
	return (0);
}
