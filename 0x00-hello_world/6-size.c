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

	printf("size of a %c: %u byte(s)\n"sizeof(c)c);
	printf("size of an %d: %d byte(s)\n"sizeof(i)i);
	printf("size of a %lu: %lu byte(s)\n"sizeof(i)i);
	printf("size of a %lld: %lld byte(s)\n"sizeof(i)i);
	printf("size of a %f: %f byte(s)\n"sizeof(f)f);
	return (0);
}
