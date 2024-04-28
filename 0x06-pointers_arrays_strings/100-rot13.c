#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @s: input string
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * Return: encoded string
 */
char *rot13(char *s)
{
	int count = 0, i;
	char str[] = "abcdefghij";
	char rot13[] = "jklmnopqrs";

	while (*(s + count) != '\0')
	{
		for (i = 0; i != '\0'; i++)
		{
			if (*(s + count) == str[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
