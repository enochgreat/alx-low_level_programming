#include <stdio.h>
/*
 *main - Size is not granular
 *Return: success 0
 */

int main(void)
{
	char c;
	int i;
	float f;

	printf("size of a char: %u byte(s)\n"sizeof(c));
	printf("size of an int: %d byte(s)\n"sizeof(i));
	printf("size of a long int: %lu byte(s)\n"sizeof(i));
	printf("size of a long long int: %lld byte(s)\n"sizeof(i));
	printf("size of a float: %f byte(s)\n"sizeof(f));
	return (0);
}
