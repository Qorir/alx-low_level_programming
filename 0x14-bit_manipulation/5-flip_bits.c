#include "main.h"

/**
 * flip_bits - counts the number of flips needed to be fliped to get to another
 * @n: the number
 * @m: number to flip n to
 *
 * Return: neccessary number of bits to be flipped go get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
