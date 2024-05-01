#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search
 * @accept: prefix substring
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	for (x = 0; *(s + x) != 0; x++)
	{
		z = 1;
		for (y = 0; *(accept + y) != 0; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				z = 0;
				break;
			}
		}
		if (z == 1)
			break;
	}
	return (x);
}
