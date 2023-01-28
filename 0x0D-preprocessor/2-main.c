#include <stdio.h>

/**
 * main - prints the name of the file of the program which the program was compiled from ,followed by \n
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
