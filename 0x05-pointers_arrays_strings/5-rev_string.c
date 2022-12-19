#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int ln, i, mid;
	char temp;

	for (ln = 0; s[ln] != '\0'; ln++)
	;
	i = 0;
	mid = ln / 2;

	while (mid--)
	{
		temp = s[ln - i - 1];
		s[ln - i -1] = s[i];
		s[i] = temp;
		i++;
	}
}
