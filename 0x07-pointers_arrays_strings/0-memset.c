#include "main.h"

/**
 * _memset - fill the first n bytes of the memory area pointed by s
 * @s: A pointer to the memory area to be filled
 * @b: character to fill the memory area
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
