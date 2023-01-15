#include <stdio.h>

/**
 * main - prints the program name followed by newline
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the argument
 *
 * Return: always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
