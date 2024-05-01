#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of argument strings
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits
 * print Error, followed by a new line, and return 1
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	int result = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
