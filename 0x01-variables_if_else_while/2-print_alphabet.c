#include <stdio.h>
/**
 * main - A programme to print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

		putchar(c);
	putchar('\n');

	return (0);
}
