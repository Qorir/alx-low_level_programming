#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointerto newly allocated space to duplicate
 * @str: string to be duplicated
 *
 * Return: NULL if insufficient memory or str == NULL
 *         Otherwise a pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
