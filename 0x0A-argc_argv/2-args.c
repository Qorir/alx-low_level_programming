#include <stdio.h>

/**
 * main - printsall arguments it receives
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to thearguments
 *
 * Return: always0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
