#include<stdio.h>
/**
 * main - A programme that prints letters in the aplabet in
 * lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		putchar (n);
		n++;
		}
	}
	putchar('\n');

	return (0);
}
