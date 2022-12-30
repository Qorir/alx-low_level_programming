#include "main.h"

/**
 * reverse_array - reverses the content of array into integers
 * @a: array of integers to be reversed
 * @n: number of elements in the array
 * Return: (void)
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i++)
	{
		temp = a[n - 1 - i];
		a[n -1 - i] = a[i];
		a[i] = temp;
	}
}
