#include "main.h"

/**
  * find_root - finds the root of the number from zero
  *
  * @root: test variable
  * @n: integer
  *
  *Return: square root
*/
int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (n);
	return (find_root(n, root + 1));
}

/**
  * _sqrt_recursion - calculates the square rot of a number
  *
  * @n: integer to be calculated
  *
  * Return: -1 if number does not have a natural square root, 1 otherwise
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
