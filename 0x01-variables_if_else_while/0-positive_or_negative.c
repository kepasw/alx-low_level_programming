#include<stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A programme to print positives and negatives
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("The number is a positive\n");
}
if (n == 0)
{
	printf("The number is 0\n");
}
if (n < 0)
{
	printf("The number is negative\n");
}
return (0);
}
