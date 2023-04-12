#include "main.h"

/**
 * is_prime_number2 -  function that returns 1 if the
 * input integer is a prime number, otherwise return 0.mber.
 * @x: Arg 1.
 * @y: Arg 1.
 * Return: 1 or 0;
 */
int is_prime_number2(int x, int y)
{
	if (y > x / y)
		return (1);
	if (x % y == 0)
		return (0);
	return (is_prime_number2(x, y + 1));
}

/**
 * is_prime_number -  function that returns 1 if the
 * input integer is a prime number, otherwise return 0.mber.
 * @x: Arg 1.
 * Return: 1 or 0;
 */
int is_prime_number(int x)
{
	if (x < 0 || x == 1)
		return (0);
	return (is_prime_number2(x, 2));
}
