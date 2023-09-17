#include "main.h"
#include <stdio.h>
/**
 * times_table - multiplication table
 *  Return: Result
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)

		{	r = i * j;
		if (j == 0)
			printf("%d", r);
		else
			printf("%2d", r);
		if (j != 9)
			printf(", ");
		}
	printf("\n");
	}
}
