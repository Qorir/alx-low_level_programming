#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (success)
 */ 
int main(void)
{
int n; 

srand(time(0)); 
n = rand() - RAND_MAX / 2; 

int n;
if(n > 5)
{
printf("%d and is greater than 5\n",n);
}
else if(n == 0)
{
printf("%d and is zero\n",n);
}
else if(0 < n < 6);
printf("%d and is less than 6 but not zero\n",n);
return (0)
}
