#include "main.h"

/**
  *_pow_recursion - calculates the value of a value x, y times
  *
  * @x: integer value
  * @y: integer value
  *
  * Return: -1 if y is less than 0, otherwise, 1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
