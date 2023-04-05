#include "main.h"
/**
 * _divisible - Checks if the number is divisible
 * @num: The number to be checked
 * @div: Divisor
 *
 * Return: If number is divisible return 0
 * if number is not divisible return -1
 */
int _divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (_divisible(num, div + 1));
}

/**
 * is_prime_number -Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: If integer is prime - 1
 * if integer is not prime - 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (_divisible(n, div));
}
