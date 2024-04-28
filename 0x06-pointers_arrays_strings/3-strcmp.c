#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first input string
 * @s2:second input string
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res = 0;

	while (res == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		res = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (res);
}
