#include "main.h"
/**
 * find_sqrt - Finds the natural square root of an inputted number
 * @num: The number to find square root of
 * @root: The root to be tested
 *
 * Return: if the number is a natural number - the square root
 * if number does not have a natural square root - -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 *_sqrt_recursion - evaluate sqrt
 *@n: interger
 *Return: Sqrt_recursion
*/

int _sqrt_recursion(int n)
{
int root = 0;

if (root < 0) 
return (-1);

else
{
return (find_sqrt(root, n)); /*Recursive call*/
}

}
