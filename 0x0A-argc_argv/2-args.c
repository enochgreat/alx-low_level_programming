#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: argument string
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
