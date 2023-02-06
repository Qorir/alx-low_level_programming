#include "main.h"

/**
 * set_bit - sets the value at a given bit to 1
 * @n: pointer to the bit
 * @index: index to set the value at - indice starts at 0
 *
 * Return: if an error occurs  - -1
 *         otherwise - 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
