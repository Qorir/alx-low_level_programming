#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints addition of two positive nimbers then new line
 * @argc: number of argjments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: if one of the numbers contains symbol that ar3 not digit - 1
 * otherwise 0
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (2);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
