#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: The matrix of integers
 * @size: Matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, x, sum1 = 0, sum2 = 0;

	for (x = 0, i = size - 1; x < (size * size); x += size + 1, i += size - 1)
		sum1 += a[x], sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
