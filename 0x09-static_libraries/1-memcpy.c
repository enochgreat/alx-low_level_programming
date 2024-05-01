#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
