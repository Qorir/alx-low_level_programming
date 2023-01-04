#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the memory area to copy @src into
 * @src:source buffer to copy character from
 * @n: number of bytes to copyfrom src
 *
 * Return:a pointer to @dest
 */

void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
