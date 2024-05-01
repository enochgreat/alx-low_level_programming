#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: size of arguments passed
 * @argv: argument vectors
 * If the program does not receive two arguments, your program should
 * print Error, followed by a new line, and return 1
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int x, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		x = i * j;
		printf("%d\n", x);
	}
	return (0);
}
