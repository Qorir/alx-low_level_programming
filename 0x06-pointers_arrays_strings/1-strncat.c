#include "main.h"

/**
 * _strncat - concatenates two strings using atmostn bytes from src
 * @src: source string
 * @dest: destination string
 * @n: number of bytes from src to be appended to dest
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
