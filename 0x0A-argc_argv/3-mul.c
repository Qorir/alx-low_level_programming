#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of two numbers then new line
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 - if the programs receives two argjments
 *         1 - if it does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int n1, n2, prod;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	prod = n1 * n2;

	printf("%d\n", prod);

	return (0);
}
