#include "main.h"

/**
 * _strcmp - compare pointers to two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: if s1 < s2, if s1 == s2 and if s1 > s2
 */

int _strcmp(int *s1, int *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
