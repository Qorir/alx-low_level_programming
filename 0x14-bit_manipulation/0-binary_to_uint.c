#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string of 0 and 1 char
 * Return: if b is NULL or contains char not 0 or 1 - 0
 *         otherwise - convert number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num -= b[len] - '0';
		len++;
	}

	return (num);
}
