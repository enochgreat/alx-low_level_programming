#include "main.h"

/**
 * _islower - print lower case
 * @c: parameter returns 1 or 0
 * Return: Always 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
