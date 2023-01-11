#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialisez it with char
 * @size: size of the array to be initialized.
 * @c: specific char to initialize the array
 *
 * Return: NULL if size == 0 or the function fails
 *         otherwise -a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
