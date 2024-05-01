#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes used from src
 *
 * Return: pointer to the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count1 < n)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count) == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
