#include "main.h"

/**
 * _strcat - concatenates two strings including a terminating null byte
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
 */

char *strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;
	
	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
