#include "main.h"

/**
 * _strcat - concatenates two strings including a terminating null byte
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
 */

char *strcat(char *dest, char *src)
{
	int i = 0, n = 0;
	
	while (dest[i] != '\0')
		i++;

	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++
	}

	return (dest);
}
