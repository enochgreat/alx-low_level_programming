#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an array of chars; initializes it with specific char
 * @size: size of the memory to print
 * @c: character to store
 * Return: NULL if size is 0; a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
