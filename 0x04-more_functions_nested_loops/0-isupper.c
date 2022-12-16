#include "main.h"

/**
 * _isupper - check if c is upper
 * @c: input for the alphabet
 * Return: 1 if uppercase,0 if not
 */

char _isupper(char c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
