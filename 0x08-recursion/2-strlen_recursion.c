#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 1;
	if (*s == '\0')
		return (0);
	s++;
	n += _strlen_recursion(s);
	return (n);
}
