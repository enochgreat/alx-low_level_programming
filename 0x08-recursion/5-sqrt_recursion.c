#include "main.h"

/**
 * sqrt_operand - function call for natural square root of a number
 * @n: input number
 * @i: iterator
 * Return: square root or -1
 */
int sqrt_operand(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + sqrt_operand(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_operand(n, 2));
}
