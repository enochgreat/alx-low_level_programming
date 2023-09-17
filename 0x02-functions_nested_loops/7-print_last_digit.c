#include "main.h"
/**
 * print_last_digit - function to print last digit
 * @i: takes in number
 * Return: last digit
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
