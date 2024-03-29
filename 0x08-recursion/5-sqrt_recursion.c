#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
_sqrt_recursion(int n)
{
	(n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
actual_sqrt_recursion(int n, int i)
{
	(i * i > n)
		return (-1);
	(i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}


