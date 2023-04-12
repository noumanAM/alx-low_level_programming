#include "main.h"

/**
 * sqrtrecursion - function that returns the natural square root of a number.
 * @x: Arg 1.
 * @y: Arg 2.
 * Return: the natural square root of a number.
 */
int sqrtrecursion(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (sqrtrecursion(x, y + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @x: Arg 1.
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (sqrtrecursion(x, 1));
}
