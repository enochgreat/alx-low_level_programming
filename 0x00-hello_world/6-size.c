#include <stdio.h>
#include <limits.h>
/*
 *main - Size is not grandeur, and territory does not make a nation
 *return: return 0
 */
	int main(void)
{
	char c;
	int i;
	float f;
	double l;

	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(i));
	printf("size of a long long int: %lu byte(s)\n", sizeof(l));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}

