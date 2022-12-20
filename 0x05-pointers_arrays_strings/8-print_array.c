#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array then '\n'
 *@a: int array pointer
 *@n: int integer
 *use only putchar to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		
		printf(",");
	}
	printf("\n");
}
