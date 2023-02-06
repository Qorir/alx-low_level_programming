#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a characte c to standard output
 * @c: character to be written to standard output
 *
 * Return: 1 on success
 *         -1 on error, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
