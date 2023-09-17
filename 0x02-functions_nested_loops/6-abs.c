#include "main.h"
/**
 * _abs - print positive or negative numbers
 * @b: a or b
 * Return: 0 or 1
 */

int _abs(int b)
{
	if (b < 0)
		return (-b);

	else if (b >= 0)
	{
		return (b);
	}
	return (0);
}
