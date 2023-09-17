#include "main.h"
/**
 * print_sign - print +ve or -ve
 *@c: return answer
 *Return: 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+')
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else(n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
