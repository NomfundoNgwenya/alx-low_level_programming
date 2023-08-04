#include "main.h"
/**
 *  find_sqrt - Recursive helper function to find square root
 * @n: The number for which the square root is calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, -1 otherwise.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (find_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which the square root is calculated.
 *
 * Return: The square root if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (find_sqrt(n, 0));
}
