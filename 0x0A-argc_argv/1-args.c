#include <stdio.h>

/**
 * main- prints the number of arguments passed to it
 * @argc: number of arguments supplied
 * @argv: array of pointers to the argument
 *
 * Return: always 0
 */

int main(int argc, char __attribute__((__unused__)) * argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
