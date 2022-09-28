#include "main.h"

/**
 * _sqrt - finds the square root of a value
 * @prev: previous value
 * @root: the square value
 * Return: the square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
	{
		return (-1);
	}
	else if (prev * prev == root)
	{
		return (prev);
	}

	return (_sqrt(prev + 1, root));
}

/**
 * _sqrt_recursion - recursive square root of a number
 * @n: the integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
