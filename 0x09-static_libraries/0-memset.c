#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @n: number of bytes of the memory area
 * @s: pointer pointing to n
 * @b: constant byte
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
