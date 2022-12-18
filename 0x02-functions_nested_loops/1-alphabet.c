#include "main.h"

/**
 * main - Entry point
 * Desscription: print alphabets in lower cass followed by new line
 * print_alphabet - prints aphabets in loweecase followed by new line
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
