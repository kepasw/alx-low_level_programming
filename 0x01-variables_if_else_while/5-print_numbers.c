#include<stdio.h>
/**
 * main - Programme that prints single
 * digit number of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
