#include <stdio.h>
/**
 * main - alphabet in both upper and lower
 * Return: success 0
 */
	int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}


