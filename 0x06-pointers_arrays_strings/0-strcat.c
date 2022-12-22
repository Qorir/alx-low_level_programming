#include "main.h"

/**
 * strcat - concatenates two strings pointed by src and dest including \0
 * @src: source string
 * @dest: destination string
 * Return: a pointer to the destination string dest
 */

char *strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
