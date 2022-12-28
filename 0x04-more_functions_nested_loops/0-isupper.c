#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character checked
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(char c)
{
	if (c >= 'A' <= 'Z')
		return (1);

	else
		return (0);
}
