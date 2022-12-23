#include "main.h"

/**
 * strcat - concatenates two strings pointed by src and dest including \0
 * @src: source string
 * @dest: destination string
 * Return: a pointer to the destination string dest
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
