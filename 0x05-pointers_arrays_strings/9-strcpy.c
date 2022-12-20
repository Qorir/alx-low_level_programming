#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @src: string to be coppied
 * @dest: destination buffer
 * Return: a pointer to the destination 
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
