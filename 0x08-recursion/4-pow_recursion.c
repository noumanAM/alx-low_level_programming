#include "main.h"

/**
 * _pow_recursion - returns the value of n raised to the power of s
 * @n: value to raise
 * @s: power
 *
 * Return: result of the power
 */
int _pow_recursion(int n, int s)
{
	if (s < 0)
		return (-1);
	if (s == 0)
		return (1);
	return (n * _pow_recursion(n, s - 1));
}
