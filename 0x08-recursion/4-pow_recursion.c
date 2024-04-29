#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: power base
 * @y: power value
 * Return: 0 always.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	x *= _pow_recursion(x, y - 1);
	return (x);
}
