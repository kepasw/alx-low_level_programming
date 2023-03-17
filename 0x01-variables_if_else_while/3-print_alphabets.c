#include<stdio.h>
/**
 * main - A programme that prints alphabets in both lowecase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');

	return (0);
}
