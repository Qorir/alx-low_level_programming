#include <stdio.h>

/**
 * main - print lowercase alphabets in reverse
 *
 * Return: Always 0
 */

int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);

putchar('\n');

return (0);
}
